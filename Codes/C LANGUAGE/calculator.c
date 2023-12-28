#include <stdio.h>
#include <ctype.h>
#define p printf
#define s scanf

int n1, n2, result;
char A, S, M, D, operation, ANS;

int main (void)
{
    do
    {
        p("Welcome to the calculator program!\n");

        p("GUIDE: User must input two number first, then select operation after.\n");
        
        p("Enter the 1st number>> ");
        // Loop for non integer prompt
        while (s("%d", &n1) != 1) {
            while ((ANS = getchar()) != '\n' && ANS != EOF); // Clear input buffer
            p("Invalid input. Please enter a valid number: ");
        }
        p("Enter the 2nd number>> ");
        // Loop for non integer prompt
        while (s("%d", &n2) != 1) 
        {
            while ((ANS = getchar()) != '\n' && ANS != EOF);
            p("Invalid input. Please enter a valid number: ");
        }
        p("Now to select the operation\nChoose between:\nA. ADDITION\nS. SUBTRACTION\nM. MULTIPLICATION\nD. DIVISION.\n");
        while (1)
        {
            p("\nOperation: ");
            s(" %c", &operation);
            operation = toupper(operation);

            if (operation != 'A' && operation != 'S' && operation != 'M' && operation != 'D')
            {
                p("\n\x1b[31mInvalid input. Please choose a valid operation (A, S, M, or D).\x1b[0m\n");
            }
            else
            {
                break;
            }
        }
        switch (operation)
        {
        case 'A':
            p("\nResult %d + %d: %d\n", n1, n2, n1 + n2);
            break;
        case 'S':
            p("\nResult %d - %d: %d\n", n1, n2, n1 - n2);
            break;
        case 'M':
            p("\nResult %d * %d: %d\n", n1, n2, n1 * n2);
            break;
        case 'D':
                if (n2 != 0) 
                {
                    p("Result %d / %d: %.2f\n", n1, n2, (float)n1 / n2);
                } else 
                {
                    p("Division by 0 is not allowed.\n");
                }
                break;
        default:
            p("\nInvalid operation\n");
            break;
        }
        p("Do you want to try again? [y/n]: ");
        s(" %c", &ANS);
    } 
    while (ANS != 'n');
}