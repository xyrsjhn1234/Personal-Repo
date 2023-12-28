#include <stdio.h>

void clrscr() {
    printf("\033[2J\033[H");
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void printBox(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1) {
                printf("*");
            } else {
                if (j == 0 || j == width - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

int main() {
    clrscr();
    
    int boxWidth = 30;
    int boxHeight = 10;

    // Print box
    printBox(boxWidth, boxHeight);

    // Position cursor inside the box
    gotoxy(2, 2);

    // Print the output inside the box
    printf("This program demonstrates\n");
    gotoxy(2, 3);
    printf("the use of the clrscr() function\n");

    return 0;
}
