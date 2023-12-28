#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define p printf
#define s scanf

void clrscr() {
    printf("\033[2J\033[H");
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", x, y);
}

void notRepeat();
char playAgain(char yesOrNo);

char choice, option1, option2, option3, answer, n;
char str[10], fn[10], str1[10], str2[20];
int functions, design, loop;

// Data type declaration for DESIGN
int q, w, e, z, AGE, Temp, Large, month, day, NUM, class;
char GRADE;

// Data type declaration for LOOPS
int LeftToRead, Number, Sum, Next, Min, Max, COUNT;
char ANS;
long F;

// Define and Data type declaration for FUNCTION
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define ANSI_BG_RED        "\x1b[41m"
#define ANSI_BG_YELLOW     "\x1b[43m"
#define ANSI_BG_BLACK      "\x1b[40m"

#define ANSI_HIGH_INTENSITY "\x1b[1m"
float N, X, Y, B, E;
char str_1[20], fn_1[20], str_2[20], fn_2[20];


int main(void) 
{
    p("THIS PROGRAM IS CREATED TO SEARCH ALL OF THE SAMPLE PROGRAM OF THE FOLLOWING LESSONS:\n");
    p("'1. SOME C FUNCTION'\n'2. DESIGNING PROGRAM THAT MAKE CHOICES'\n'3. PROBLEM SOLVING USING LOOPS'\n");
    do
    {
        while (true) {
        p("Select one[1, 2, 3]: ");
        s(" %c", &choice);
        getchar();
        if ((choice != '1') && (choice != '2') && (choice != '3')) {
            p("Error\nPlease select valid input\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        } else {
            break;
        }
    }
        switch (choice) 
        {
            // tc 35 to 44 
        case '1':
            p("CONGRATULATIONS!!\nYOU'VE CHOOSEN THE 'SOME C FUNCTION'\n");
            do {
                while (true) 
                {
                    p("Select TC [35 - 44]: ");
                    s(" %d", &functions);
                    if ((functions < 35) || (functions > 44)) {
                        p("Error\nPlease select valid numbers only...\n");
                        int c;
                        while ((c = getchar()) != '\n' && c != EOF);
                    } else {
                        break;
                    }
                }
                switch (functions) 
                {
                case 35:
                    clrscr();
                    gotoxy(5, 5);
                    printf("This program demonstrates\n");
                    gotoxy(10, 6);
                    printf("the use of the clrscr() function\n");
                    break;
                case 36:
                    clrscr();
                    gotoxy(28, 10);
                    printf("WELCOME TO C LANGUAGE\n");
                    break;
                case 37:
                    clrscr();
                    gotoxy(5, 5);
                    printf("My favorite");
                    gotoxy(10, 6);
                    printf("is");
                    gotoxy(15, 7);
                    printf("Turbo C\n");
                    break;
                case 38:
                    printf(ANSI_BG_RED ANSI_COLOR_BLUE "Blue characters on red background" ANSI_COLOR_RESET "\n");
                    printf(ANSI_BG_YELLOW ANSI_COLOR_GREEN "Green characters on yellow background" ANSI_COLOR_RESET "\n");
                    printf(ANSI_BG_BLACK ANSI_HIGH_INTENSITY ANSI_COLOR_YELLOW "Blinking yellow characters on black background" ANSI_COLOR_RESET "\n");
                    break;
                case 39:
                    void clrscr(){
                        printf("\033[2J\033[H");
                    }
                    
                    void gotoxy(int x, int y){
                        printf("\033[%d;%dH", y, x);
                    }
                    clrscr();
                    gotoxy(38, 1);  printf("TREE");
                    gotoxy(39, 3);  printf("I");
                    gotoxy(37, 4);  printf("think");
                    gotoxy(34, 5);  printf("that I shall");
                    gotoxy(32, 6);  printf("never see a poem");
                    gotoxy(30, 7);  printf("as lovely as a tree");
                    gotoxy(27, 8);  printf("a tree those hungry mouth");
                    gotoxy(25, 9);  printf("is pressed against the earth's");
                    gotoxy(24, 10); printf("sweet flowing breast, a tree that");
                    gotoxy(23, 11); printf("looks at God all day, and lifts it's");
                    gotoxy(21, 12); printf("left arms to pray. A tree that may in");
                    gotoxy(19, 13); printf("summer wear, a nest of robins in her hair;");
                    gotoxy(17, 14); printf("upon whose bosom snow has lain, who intimately");
                    gotoxy(33, 15); printf("lives with rain");
                    gotoxy(32, 16); printf("poems are made by");
                    gotoxy(35, 17); printf("fools like");
                    gotoxy(38, 18); printf("me");
                    gotoxy(38, 19); printf("but");
                    gotoxy(38, 20); printf("only");
                    gotoxy(38, 21); printf("God");
                    gotoxy(38, 22); printf("can");
                    gotoxy(38, 23); printf("make");
                    gotoxy(38, 24); printf("a tree.\n");
                    break;
                case 40:
                    N = -1.0;
                    printf("Arc sine of %.2f is %f\n", N, asin(N));
                    printf("Arc cosine of %.2f is %f\n", N, acos(N));
                    printf("Arc tangent of %.2f is %f\n", N, atan(N));
                    printf("Cosine of %.2f is %f\n", N, cos(N));
                    printf("Hyperbolic cosine of %.2f is %f\n", N, cosh(N));
                    printf("Sine of %.2f is %f\n", N, sin(N));
                    printf("Hyperbolic sine of %.2f is %f\n", N, sinh(N));
                    printf("Tangent of %.2f is %f\n", N, tan(N));
                    break;
                case 41:
                    Y = -1.0;
                    printf("atan2 of %.2f is %f\n", Y, atan2(Y, 1.0));
                    N = 1.0;
                    printf("Logarithm of %.2f is %f\n", N, log(N));
                    printf("Base 10 log of %.2f is %f\n", N, log10(N));
                    printf("Natural logarithm e to the first %.2f\n", exp(1.0));
                    X = 9.0; Y = 2.0;
                    printf("Modulus or remainder of X/Y is %f\n", fmod(X, Y));
                    B = 9.0; E = 2.0;
                    printf("Base %f raised to %f is %f\n", B, E, pow(B, E));
                    printf("Base 10 %f raised to %f is %f\n", B, E, pow(10.0, E));
                    printf("Square root of %f is %f\n", B, sqrt(B));
                    printf("The End\n");
                    break;
                case 42:
                    strcpy(str, "Yuan");
                    strcpy(fn, "Williams");
                    puts(str);
                    puts(fn);
                    break;
                case 43:
                    strcpy(str1, "I love");
                    strcpy(str2, "Yuan");
                    strcpy(str1, str2);
                    puts(str1);
                    puts(str2);
                    break;
                case 44:
                    printf("Enter your given name: ");
                    scanf("%s", str_1);
                
                    printf("Enter your family name: ");
                    scanf("%s", fn_1);
                
                    strcpy(str_2, str_1);
                    strcpy(fn_2, fn_1);
                
                    puts(str_2);
                    puts(fn_2);
                    printf("%s %s\n", str_1, fn_1);
                    break;

                default: 
                    p("Error: Invalid Input.\n");
                    break;
                }
                p("Do you want to play again? (y/n): ");
                scanf(" %c", &answer);
                answer = tolower(answer);
                notRepeat();
                answer = playAgain(answer);
            } 
            while (answer == 'y');
            break;

        case '2':
        // TC - 45 to TC - 57
            p("CONGRATULATIONS!!\nYOU'VE CHOOSEN THE 'DESIGNING PROGRAM THAT MAKE CHOICES'\n");
            do
            {
            while (true) 
                {
                    p("Select TC [45 - 57]: ");
                    s(" %d", &design);
                    if ((design < 45) || (design > 57)) 
                    {
                        p("Error\nPlease select valid numbers only...\n");
                        notRepeat();
                    } else 
                    {
                        break;
                    }
                }
            switch (design)
            {
                case 45:
                    printf("Enter any number: ");
                    scanf("%d", &w);

                    if (w < 10)
                        printf("\n%d is less than 10\n", w);
                    break;
                case 46:
                    printf("Enter first no.: ");
                    scanf("%d", &w);

                    printf("\nEnter second no.: ");
                    scanf("%d", &z);

                    if (w > z)
                        printf("\n%d is greater than %d\n", w, z);

                    if (w < z)
                        printf("%d is less than %d\n", w, z);
                    break;
                case 47:
                    printf("Please enter your age: \n");
                    scanf("%d", &AGE);

                    if (AGE >= 18) {
                        printf("\nYou are old enough to");
                        printf("\njoin the army");
                    }

                    if (AGE >= 21) {
                        printf("\nYou are old enough to drink");
                    }

                    printf("\nGood Luck!!");

                    break;
                case 48:
                    printf("Enter the 1st no.: ");
                    scanf("%d", &q);

                    printf("\nEnter the 2nd no.: ");
                    scanf("%d", &w);

                    printf("\nEnter the 3rd no.: ");
                    scanf("%d", &e);

                    if (q > w) {
                        Temp = q;
                        q = w;
                        w = Temp;
                    }
                    if (w > e) {
                        Temp = w;
                        w = e;
                        e = Temp;
                    }
                    if (q > w) {
                        Temp = q;
                        q = w;
                        w = Temp;
                    }
                    printf("\n%d %d %d\n", q, w, e);

                break;
                case 49:
                    printf("Enter the 1st no.: ");
                    scanf("%d", &w);

                    printf("\nEnter the 2nd no.: ");
                    scanf("%d", &z);

                    if (w > z)
                        printf("\n%d is greater than %d\n", w, z);
                    else
                        printf("\n%d is less than or equal to %d\n", w, z);
                    break;
                case 50:
                    printf("Enter any number >> ");
                    scanf("%d", &w);

                    if (w > 0) {
                        printf("\n%d is positive\n", w);
                        printf("%d is greater than zero\n", w);
                    } else {
                        printf("\n%d is zero or\n", w);
                        printf("it is negative\n");
                    }
                    break;
                case 51:
                    printf("Enter 3 nos. separated by a space: ");
                    scanf("%d%d%d", &q, &w, &e);

                    Large = (q > w) ? ((q > e) ? q : e) : ((w > e) ? w : e);

                    printf("\n%d is the largest number\n", Large);
                    break;
                case 52:printf("Enter your month and day of birth, as two numbers\n");
                    printf("separated by a space >> ");
                    scanf("%d%d", &month, &day);

                    if ((month == 10) && (day >= 24))
                        printf("\nYou’re an October Scorpio\n");
                    else
                        printf("\nYou’re not an October Scorpio\n");

                    if ((month == 11) && (day <= 22))
                        printf("\nYou’re a November Scorpio\n");
                    else
                        printf("\nYou’re not a November Scorpio\n");

                    printf("I knew it\n");
                    break;
                case 53:
                    printf("Enter the outside temperature (Fahrenheit) >> ");
                    scanf("%d", &Temp);

                    printf("\nFor a temperature of %d Fahrenheit\n", Temp);
                    printf("the appropriate sport is ");

                    if (Temp > 85)
                        printf("Swimming");
                    else if (Temp > 70)
                        printf("Tennis");
                    else if (Temp > 32)
                        printf("Golf");
                    else if (Temp > 10)
                        printf("Skiing");
                    else
                        printf("Chinese Checkers");
                    break;
                case 54:
                    printf("First number? >> ");
                    scanf("%d", &w);

                    printf("Second number? >> ");
                    scanf("%d", &z);

                    if (w > z)
                        printf("%d is greater than %d", w, z);
                    else if (w < z)
                        printf("%d is greater than %d", z, w);
                    else
                        printf("%d is equal to %d", w, z);
                    break;
                case 55:
                    printf("Enter any number from 0 to 5\n");
                    scanf("%d", &NUM);

                    switch (NUM) 
                    {
                        case 0:
                            printf("You entered zero\n");
                            break;
                        case 1:
                            printf("You entered one\n");
                            break;
                        case 2:
                            printf("You entered two\n");
                            break;
                        case 3:
                            printf("You entered three\n");
                            break;
                        case 4:
                            printf("You entered four\n");
                            break;
                        case 5:
                            printf("You entered five\n");
                            break;
                        default:
                            printf("Invalid input\n");
                            break;
                    }
                    break;
                case 56:
                    printf("What grade did you receive? \n");
                    scanf(" %c", &GRADE);
                    GRADE = toupper(GRADE);
                    switch (GRADE) 
                    {
                        case 'A':
                        case 'B':
                            printf("Very Good\n");
                            break;
                        case 'C':
                            printf("Passing\n");
                            break;
                        case 'D':
                        case 'E':
                            printf("Too bad\n");
                            break;
                        default:
                            printf("That is not a possible grade\n");
                            break;
                    }
                    break;
                case 57:
                    printf("Enter your class code and I will tell you when you can register\n");
                    printf("1 for freshman\n");
                    printf("2 for sophomore\n");
                    printf("3 for junior\n");
                    printf("4 for senior\n");
                    scanf("%d", &class);

                    switch (class) {
                        case 1:
                            printf("Freshman...\n");
                            printf("Enrollment on May 6 – 12\n");
                            break;
                        case 2:
                        case 3:
                            printf("Sophomores and Juniors...\n");
                            printf("Enrollment on May 1 – 5\n");
                            break;
                        case 4:
                            printf("Senior...\n");
                            printf("Enrollment on May 13 – 18\n");
                            break;
                        default:
                            printf("Error: Illegal class code!\n");
                            break;
                    }
                    break;    
            default:
                p("Error: Invalid Input.\n");
                break;
            } 
                p("Do you want to play again? (y/n): ");
                scanf(" %c", &answer);
                answer = tolower(answer);
                notRepeat();
                answer = playAgain(answer);
            } 
            while (answer == 'y');
            
        case '3':
        // TC - 58 to TC - 64
            p("CONGRATULATIONS!!\nYOU'VE CHOOSEN THE 'PROBLEM SOLVING USING LOOPS'\n");
            do
            {   while (true) 
                {
                    p("Select TC [58 - 64]: ");
                    s(" %d", &loop);
                    if ((loop < 58) || (loop > 64)) 
                    {
                        p("Error\nPlease select valid numbers only...\n");
                        notRepeat();
                    } else 
                    {
                        break;
                    }
                }
                switch (loop)
                {
                case 58:
                    NUM = 0;
                    while (NUM < 10) 
                    {
                        NUM++;
                        printf("Number %d\n", NUM);
                    }
                    break;
                case 59:
                    printf("This program adds a list of integers.\n");
                    printf("How many integers will there be in the list?\n");
                    scanf("%d", &NUM);
                    printf("Now type in the %d integers.\n", NUM);

                    LeftToRead = NUM;
                    Sum = 0;

                    while (LeftToRead > 0) {
                        scanf("%d", &Number);
                        Sum += Number;
                        LeftToRead--;
                    }

                    printf("The sum of the %d numbers is %d\n", NUM, Sum);
                    break;
                case 60:
                    printf("This program finds the largest and smallest\n");
                    printf("values on a list of positive integers.\n");
                    printf("Enter a list of positive integers.\n");
                    printf("Place a negative number at the end.\n");

                    scanf("%d", &Next);
                    Max = Next;
                    Min = Next;

                    while (Next > 0) {
                        if (Next > Max)
                            Max = Next;
                        if (Next < Min)
                            Min = Next;
                        scanf("%d", &Next);
                    }

                    printf("The largest is %d\n", Max);
                    printf("The smallest is %d\n", Min);
                    break;
                case 61:
                do
                {
                    printf("Enter the 2 nos. separated by a space\n");
                    scanf("%d%d", &q, &w);
                    Sum = q + w;
                    printf("\nTheir sum is %d\n", Sum);
                    printf("\nTry Again ? [Y/N]");
                    scanf(" %c", &ANS); 
                } 
                while (!((ANS == 'n') || (ANS == 'N')));
                    break;
                case 62:
                    printf("This program prints from 1 to 10\n\n");
                    for (COUNT = 1; COUNT <= 10; COUNT++)
                        printf("%d\n", COUNT);
                    break;
                case 63:
                    printf("Enter a number: ");
                    scanf("%d", &q);
                    Sum = 0;
                    for (w = 1; w <= q; w++) {
                        e = w % 2;
                        if (e == 0)
                            Sum = Sum + w;
                    }
                    break;
                    printf("\nThe sum of all even numbers\n");
                    printf("from %d is %d\n", q, Sum);
                case 64:
                    printf("Enter a number from 1 to 30 >>");
                    scanf("%d", &q);
                    F = 1;
                    for (w = 1; w <= q; w++)
                        F *= w;
                    printf("\nThe factorial from 1 to %d is %ld\n", q, F);
                    break;
                default:
                    printf("Error: Illegal class code!\n");
                    break;
                
                p("Do you want play again? (y/n): ");
                scanf(" %c", &answer);
                answer = tolower(answer);
                notRepeat();
                answer = playAgain(answer);
                }
            }
            while (answer == 'y');
            break;
        }
            p("Do you want run the entire program again? (y/n): ");
            scanf(" %c", &answer);
            answer = tolower(answer);
            notRepeat();
            answer = playAgain(answer);
    } 
    while (answer == 'y');
    
    return 0;
}

char playAgain(char yesOrNo) 
{
    if (yesOrNo != 'y' && yesOrNo != 'n') 
    {
        p("Error. Wrong input please try again.\n");
        p("Do you wanna play again? (y/n): ");
        s(" %c", &yesOrNo);
        notRepeat();
        yesOrNo = tolower(yesOrNo);
    }
    return yesOrNo;
}



void notRepeat()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}