#include <stdio.h>
#define p printf
#define s scanf

int number ();
int input;
char ANS, A, B, C, y, n;

int main (void)
{
    do
    {
        p("\nChoose the operation\n");
        p("'A' For Hour to seconds conversion\n");
        p("'B' For meters to millimeters\n");
        p("'B' For millimeter to meters\n");

        // do while loop to check if the user input proper letter according to the instruction.
        do
        {
            p("Enter the letter: ");
            s(" %c", &ANS);
            // Condition, if the user didn't put 'A', 'B', 'C'.
            if (ANS != 'A' && ANS != 'B' && ANS != 'C')
            {
                p("\n\x1b[31mPlease, enter the valid letter.\x1b[37m\n\n");
            } 
        }
        //While the condition is true, repeat the block of code. 
        while (ANS != 'A' && ANS != 'B' && ANS != 'C');

        switch (ANS)
        {
        // First Choice
        case 'A':
        // Initialize the time
        int time;
            // Using the input variable to store the value of function "int number (number)"" 
            input = number();
            p("Hour to seconds\n");
            // Time is now equal to the "input"/ function time 60.
            time = input * 60;
            p("%i minute to %i seconds\n", input, time);
            break;

        case 'B':
        int millimeters;
            input = number();
            p("meters to millimeters/ 'm' to 'mm'\n");
            millimeters = input * 1000;
            p("%i meters to %i millimeters\n", input, millimeters);
            break;

        case 'C':
        float meters;

            input = number();
            p("millimeters to meters/ 'mm' to 'm'\n");
            meters = (float)input / 1000;
            p("%i millimeters to %.2f meters\n", input, meters);
            break;
        }

    p("\nDo want to try again? [y/n]\n");
    s(" %c", &ANS);
    } 
    while (ANS != 'n');
}











// Function
int number (void)
{
    // While true
    while (1)
    {
        p("Number: ");
        // Error handling
        if (s("%i", &input) != 1 || input <= 0)
        {
            p("\n\x1b[31mPlease provide non-negative and greater than zero numbers.\x1b[37m\n\n");
            // Reads the string and char input
            while (getchar() != '\n');
            // Continues the loop
            continue;
        }
        // Break the loop
        break;

        return input;
    }
}