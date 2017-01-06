#include<stdio.h>
#include <string.h>
#include <stdlib.h> // For exit() function
void FrontPage();   //Front Page declaration
void MenuPage();    // Menu Page declaration
void fileOne();     // Game Pulse declaration
void fileTwo();     // Game helps declaration
void exitPage();    // Exit declaration
void iqTest();      // IQ test declaration
void gkTest();      // GK test declaration
void mathTest();    // Math declaration
void quizTest();    // Quiz declaration
void spellingTest(); // Spelling declaration
int Cap(char string[]); // Making first latter uppercase UDF declaration


void main()
{
    FrontPage(); //Front Page Call
}

//Front Page define
void FrontPage()
{
    system("color a");
    printf("\t\t\tSkill Testing Lab!\n\n\t\tDeveloper \t: Md. Asadullah\n\t\tUniversity \t: IUBAT University");
    printf("\n\n\t\tTest your brain and find out your skills!");

    /* User name scanning here */
    char name[100];
    printf("\n\n\t\tPlease enter Your Name :  ----------\b\b\b\b\b\b\b\b\b\b");
    scanf("%[^\n]s",name);

    /* Making first latter uppercase UDF call */
    Cap(name);

    /* A menu for help user */
    printf("\n\n\t\tThank You %s! Choose any number from bellow list: ",name);
    printf("\n\n\t\t\t 1. Get Test List");
    printf("\n\t\t\t 2. Game Rules");
    printf("\n\t\t\t 3. Help Tips");
    printf("\n\t\t\t 0. Exit");

    int choose;
    printf("\n\t\t\t");
    scanf("%d",&choose);
    if(choose == 1)
    {
        printf("\n\t\t\t\t");
        getchar();
        MenuPage(); // Menu Page call
    }
    else if(choose == 2)
    {
        system("cls");
        system("color C");
        fileOne();
    }
    else if(choose == 3)
    {
        system("cls");
        system("color C");
        fileTwo();
    }
    else if(choose == 0)
    {
        exitPage();
    }
    else{
        printf("Invalid entry! Try again");
        system("cls");
        FrontPage();
    }
    getchar();
}

/* Making first latter uppercase UDF definition */
int Cap(char string[]){
    string[0]= toupper(string[0]);
    return(string);
}

// Menu Page define
void MenuPage()
{
    system("cls");
    system("color B");
    printf("\t\t\t\tSkill Testing Lab!\n\n\t\t\tDeveloper \t: Md. Asadullah\n\t\t\tUniversity \t: IUBAT University");

    /* Menu section declare and taking user input */
    printf("\n\n\n\t\t\tChoose any option number from bellow list: ");
    printf("\n\n\n\t\t\t 1. IQ \tTest");
    printf("\n\t\t\t 2. GK \tTest");
    printf("\n\t\t\t 3. MATH \tTest");
    printf("\n\t\t\t 4. QUIZE \tTest");
    printf("\n\t\t\t 5. Spelling \tTest");
    printf("\n\t\t\t 0. Exit");

    /* User input checking here */
     int choose1;

    //string choose1;
    printf("\n\n\t\t\t  ");
    scanf("%d",&choose1);

    if( choose1==1 ){
        iqTest();
    }

    else if(choose1==2){
        gkTest();
    }

    else if(choose1==3){
        mathTest();
    }

    else if(choose1==4){
        quizTest();
    }
    else if(choose1==5){
        spellingTest();
    }
    else if(choose1==0){
        exitPage();
    }
    else{
        printf("Invalid input");
    }
    getchar();
}

/* Game rules display from file */
void fileOne()
{
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("gameRules.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline
    fscanf(fptr,"%[^\n]", c);

    printf("\n\t\n%s", c);
    fclose(fptr);

    printf("\n\n\tPress any key to get test list");
    getch();
    MenuPage(); // menu page call

    return 0;
}


/* Game helps display from file */
void fileTwo()
{
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("gameHelps.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline
    fscanf(fptr,"%[^\n]", c);

    printf("\n\t\n%s", c);
    fclose(fptr);

    printf("\n\n\tPress any key to get test list");
    getch();
    MenuPage(); // menu page call

    return 0;
}


/* exit function define */
void exitPage()
{
    system("cls");
    system("color B");
    printf("\n\tWe are sorry to see you exit now. Hope you will back soon!");
    printf("\n\n\tThank You for using GLAB\n\tGlab Team!\n");
    getch();
}

/* IQ Test define */
void iqTest()
{
    system("cls");
    system("color A");
    printf("\t\t\tSkill Testing Lab!\n\n\t\tDeveloper \t: Md. Asadullah\n\t\tUniversity \t: IUBAT University");

    printf("\n\n\tPlease put right answer carefully and press enter for next question:\t\t\t");
    int i, count = 0, count1 = 0;

    // 1st question ans 1
    printf("\n1) which one of the five is least like the other four? \n\n");
    printf("\t1.\tDog\n\t2.\tMouse\n\t3.\tLion\n\t4.\tSnake\n\t5.\tElephant\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==1){
        count++;
    }
    else{
        count1++;
    }

    // 2nd question ans 3
    printf("\n2) which number should come next in the series? 1 - 1 - 2 - 3 - 5 - 8 - 13 \n\n");
    printf("\t1.\t8\n\t2.\t13\n\t3.\t21\n\t4.\t26\n\t5.\t31\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==3){
        count++;
    }
    else{
        count1++;
    }

    // 3rd question ans 5
    printf("\n3) which one of the five choices makes the best comparison? PEACH is to HCAEP as 46251 is to: \n\n");
    printf("\t1.\t25641\n\t2.\t26451\n\t3.\t12654\n\t4.\t51462\n\t5.\t15264\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==5){
        count++;
    }
    else{
        count1++;
    }

    // 4th question ans 2
    printf("\n4) Mary, who is sixteen years old, is four times as old as her brother. How old will Mary be when she is twice as old as her brother? \n\n");
    printf("\t1.\t20\n\t2.\t24\n\t3.\t25\n\t4.\t26\n\t5.\t27\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==2){
        count++;
    }
    else{
        count1++;
    }

    // 5th  question ans 3
    printf("\n5) Which one of the numbers does not belong in the following series? 2 - 3 - 6 - 7 - 8 - 14 - 15 - 30 \n\n");
    printf("\t1.\tTHREE\n\t2.\tSEVEN\n\t3.\tEIGHT\n\t4.\tFIFTEEN\n\t5.\tTHIRTY\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==3){
        count++;
    }
    else{
        count1++;
    }

    // 6th question ans 1
    printf("\n6) Which one of the five choices makes the best comparison? Finger is to Hand as Leaf is to: \n\n");
    printf("\t1.\tTwig\n\t2.\tTree\n\t3.\tBranch\n\t4.\tBlossom\n\t5.\tBark\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==1){
        count++;
    }
    else{
        count1++;
    }

    if(count>4){
        printf("\t\tYour IQ level is vary high!\n");
    }
    else if(count>2 && count<4){
        printf("\t\tYour IQ level is Medium! Keep trying\n");
    }
    else{
        printf("\t\tYour IQ level is Low! Keep trying!\n");
    }
    printf("\t\t\tScore is = %d\n", 5*count);

    printf("\n\n\tEnter 1 for back to the list or any key to exit\n\n\t");
    int wish;
    scanf("%d",&wish);

    if( wish==1 ){
        MenuPage();
    }
    else{
        exitPage();
    }

    getchar();
}

/* GK Test define */
void gkTest()
{
    system("cls");
    system("color B");
    printf("\t\t\tSkill Testing Lab!\n\n\t\tDeveloper \t: Md. Asadullah\n\t\tUniversity \t: IUBAT University");

    printf("\n\n\tPlease put right answer carefully and press enter for next question:\t\t\t");
    int i, count = 0, count1 = 0;

    // 1st question ans 1
    printf("\n1) Who is the founder of IUBAT University? \n\n");
    printf("\t1.\tDr. Alim Ullah\n\t2.\tDr. Krisna Dahs\n\t3.\tDr. Mukul Ahmed\n\t4.\tProf. Samin Ara\n\t5.\tProf. Kaikobad\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==1){
        count++;
    }
    else{
        count1++;
    }

    // 2nd question ans 3
    printf("\n2) Dhaka University established in which year ?\n\n");
    printf("\t1.\t1915\n\t2.\t1917\n\t3.\t1921\n\t4.\t1942\n\t5.\t1947\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==3){
        count++;
    }
    else{
        count1++;
    }

    // 3rd question ans 5
    printf("\n3) Which city is near dhaka ? \n\n");
    printf("\t1.\tPabna\n\t2.\tBogra\n\t3.\tRongpur\n\t4.\tRajshahi\n\t5.\tComilla\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==5){
        count++;
    }
    else{
        count1++;
    }

    // 4th question ans 2
    printf("\n4) Who is DJ Trump \n\n");
    printf("\t1.\tUS PEOPLE\n\t2.\tUS PRESIDANT\n\t3.\tUNKNOWN\n\t4.\tSINGURE\n\t5.\tPROFESSIOR\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==2){
        count++;
    }
    else{
        count1++;
    }

    // 5th  question ans 3
    printf("\n5) Who is the writer of CP Book ? \n\n");
    printf("\t1.\tRahman Malek\n\t2.\tANSI\n\t3.\tSubeen Tahmim\n\t4.\tDr. Kamal\n\t5.\tIOOI\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==3){
        count++;
    }
    else{
        count1++;
    }

    // 6th question ans 1
    printf("\n6) Where is dhaka University? \n\n");
    printf("\t1.\tDhaka\n\t2.\tPabna\n\t3.\tBogra\n\t4.\tKhulna\n\t5.\tComilla\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==1){
        count++;
    }
    else{
        count1++;
    }

    if(count>4){
        printf("\t\tYour GK level is vary high!\n");
    }
    else if(count>2 && count<4){
        printf("\t\tYour GK level is Medium! Keep trying\n");
    }
    else{
        printf("\t\tYour GK level is Low! Keep trying!\n");
    }
    printf("\t\t\tScore is = %d\n", 5*count);

    printf("\n\n\tEnter 1 for back to the list or any key to exit\n\n\t");
    int wish;
    scanf("%d",&wish);

    if( wish==1 ){
        MenuPage();
    }
    else{
        exitPage();
    }

    getchar();
}

/* Math Test define */
void mathTest()
{
    system("cls");
    system("color C");
    printf("\t\t\tSkill Testing Lab!\n\n\t\tDeveloper \t: Md. Asadullah\n\t\tUniversity \t: IUBAT University");

    printf("\n\n\tPlease put right answer carefully and press enter for next question:\t\t\t");
    int i, count = 0, count1 = 0;

    // 1st question ans 1
    printf("\n1) What will be answer of .01*.01 \n\n");
    printf("\t1.\t.0001\n\t2.\t000.1\n\t3.\t1.0000\n\t4.\t000.2\n\t5.\tNull\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==1){
        count++;
    }
    else{
        count1++;
    }

    // 2nd question ans 3
    printf("\n2) What will be correct answer of 0/2569874\n\n");
    printf("\t1.\t2569874\n\t2.\t2569\n\t3.\t0.0\n\t4.\t.0000\n\t5.\t1947\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==3){
        count++;
    }
    else{
        count1++;
    }

    // 3rd question ans 5
    printf("\n3) what will be the next number of the series 11,22,33,44,55,.. \n\n");
    printf("\t1.\t12\n\t2.\t21\n\t3.\t32\n\t4.\t45\n\t5.\t66\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==5){
        count++;
    }
    else{
        count1++;
    }

    // 4th question ans 2
    printf("\n4) Which is 4th digit highest number ? \n\n");
    printf("\t1.\t987\n\t2.\t9999\n\t3.\t1000\n\t4.\t1999\n\t5.\t8999\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==2){
        count++;
    }
    else{
        count1++;
    }

    // 5th  question ans 3
    printf("\n5) Your age is 2 more then me. If i am 21 then how much you ? \n\n");
    printf("\t1.\t21\n\t2.\t12\n\t3.\t23\n\t4.\t43\n\t5.\t19\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==3){
        count++;
    }
    else{
        count1++;
    }

    // 6th question ans 1
    printf("\n6) What is correct here 8 = 4-2*4 or 4*3-1 \n\n");
    printf("\t1.\t1 & 2\n\t2.\t1\n\t3.\t1\n\t4.\t Null\n\t5.\t0\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
    if(i==1){
        count++;
    }
    else{
        count1++;
    }

    if(count>4){
        printf("\t\tYour Math level is vary high!\n");
    }
    else if(count>2 && count<4){
        printf("\t\tYour Math level is Medium! Keep trying\n");
    }
    else{
        printf("\t\tYour Math level is Low! Keep trying!\n");
    }
    printf("\t\t\tScore is = %d\n", 5*count);

    printf("\n\n\tEnter 1 for back to the list or any key to exit\n\n\t");
    int wish;
    scanf("%d",&wish);

    if( wish==1 ){
        MenuPage();
    }
    else{
        exitPage();
    }

    getchar();
}

/* Quiz Test define */
void quizTest()
{
    system("cls");
    system("color D");
    printf("\t\t\tSkill Testing Lab!\n\n\t\tDeveloper \t: Md. Asadullah\n\t\tUniversity \t: IUBAT University");

    printf("\n\n\tPlease put right answer carefully and press enter for next question:\t\t\t");
    int i, count = 0, count1 = 0;

    // 1th question ans 2
    printf("\n1) Choose the number that is 1/4 of 1/2 of 1/5 of 200: \n\n");
    printf("\t1.\t2\n\t2.\t5\n\t3.\t10\n\t4.\t25\n\t5.\t50\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==2){
            count++;
        }
        else{
            count1++;
        }

    // 2nd question ans 1
    printf("\n2) If all Bloops are Razzies and all Razzies are Lazzies, then all Bloops are definitely Lazzies? \n\n");
    printf("\t1.\tTrue\n\t2.\tFalse\n\t3.\tTrue & False\n\t4.\tNo One\n\t5.\tBlank\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==1){
            count++;
        }
        else{
            count1++;
        }

    // 3rd question ans 2
    printf("\n3) “Pig is to pork” as “Cow is to _____”: \n\n");
    printf("\t1.\tLamb\n\t2.\tBeef\n\t3.\tStew\n\t4.\tCattle\n\t5.\tLong\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==2){
            count++;
        }
        else{
            count1++;
        }

    // 4th question ans 3
    printf("\n4) The words “inclusive” and “exclusive” have: \n\n");
    printf("\t1.\tThe same meaning\n\t2.\tDifferent meanings\n\t3.\tAre the opposite in meaning\n\t4.\t1 & 2\n\t5.\tNone\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==3){
            count++;
        }
        else{
            count1++;
        }

    // 5th question and ans 4
    printf("\n5) “Boat is to water” therefore “Plane is to _____” \n\n");
    printf("\t1.\tFly\n\t2.\tSky\n\t3.\tFloat\n\t4.\tAir\n\t5.\tWater\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==4){
            count++;
        }
        else{
            count1++;
        }

    // 6th question and ans 5
    printf("\n6) The word PARTICULAR is the opposite of: \n\n");
    printf("\t1.\tDistinct\n\t2.\tVictory\n\t3.\tFussy\n\t4.\tExacting\n\t5.\tVague\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==5){
            count++;
        }
        else{
            count1++;
        }

    if(count>4){
        printf("\t\tYour Quiz level is vary high!\n");
    }
    else if(count>2 && count<4){
        printf("\t\tYour Quiz level is Medium! Keep trying\n");
    }
    else{
        printf("\t\tYour Quiz level is Low! Keep trying!\n");
    }
    printf("\t\t\tScore is = %d\n", 5*count);

    printf("\n\n\tEnter 1 for back to the list or any key to exit\n\n\t");
    int wish;
    scanf("%d",&wish);

    if( wish==1 ){
        MenuPage();
    }
    else{
        exitPage();
    }

    getchar();
}

/* Spelling Test define */
void spellingTest()
{
    system("cls");
    system("color E");
    printf("\t\t\tSkill Testing Lab!\n\n\t\tDeveloper \t: Md. Asadullah\n\t\tUniversity \t: IUBAT University");

    printf("\n\n\tPlease put right answer carefully and press enter for next question:\t\t\t");
    int i, count = 0, count1 = 0;

    // 1th question ans 2
    printf("\n1) Find correct spelling : \n\n");
    printf("\t1.\tAbreviate\n\t2.\tAbbreviate\n\t3.\tAbrrviate\n\t4.\tAbbreviat\n\t5.\tAbreviat\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==2){
            count++;
        }
        else{
            count1++;
        }

    // 2nd question ans 1
    printf("\n2) Find correct spelling \n\n");
    printf("\t1.\tAcquaintance\n\t2.\tAccquaintance\n\t3.\tAcqquaintance\n\t4.\tAcquainttance\n\t5.\tAcquanttance\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==1){
            count++;
        }
        else{
            count1++;
        }

    // 3rd question ans 2
    printf("\n3) Find correct spelling \n\n");
    printf("\t1.\tAcoompany\n\t2.\tAccompany\n\t3.\tAcommpany\n\t4.\tAcompany\n\t5.\tAcommpany\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==2){
            count++;
        }
        else{
            count1++;
        }

    // 4th question ans 3
    printf("\n4) Find correct spelling \n\n");
    printf("\t1.\tAccoomodate\n\t2.\tAccomodate\n\t3.\tAccommodate\n\t4.\tAcommodate\n\t5.\tAcomodate\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==3){
            count++;
        }
        else{
            count1++;
        }

    // 5th question and ans 4
    printf("\n5) Find correct spelling \n\n");
    printf("\t1.\tAcessary\n\t2.\tAcessarry\n\t3.\tAccesary\n\t4.\tAccessary\n\t5.\tAcesary\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==4){
            count++;
        }
        else{
            count1++;
        }

    // 6th question and ans 5
    printf("\n6) Find correct spelling \n\n");
    printf("\t1.\tAcelrate\n\t2.\tAcellrate\n\t3.\tAceelerate\n\t4.\tAcelerate\n\t5.\tAccelerate\n");

    printf("\n\tAnswer = ");
    scanf("%d",&i);
        if(i==5){
            count++;
        }
        else{
            count1++;
        }

    if(count>4){
        printf("\t\tYour Spelling level is vary high!\n");
    }
    else if(count>2 && count<4){
        printf("\t\tYour Spelling level is Medium! Keep trying\n");
    }
    else{
        printf("\t\tYour Spelling level is Low! Keep trying!\n");
    }
    printf("\t\t\tScore is = %d\n", 5*count);

    printf("\n\n\tEnter 1 for back to the list or any key to exit\n\n\t");
    int wish;
    scanf("%d",&wish);

    if( wish==1 ){
        MenuPage();
    }
    else{
        exitPage();
    }

    getchar();
}
