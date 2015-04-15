/*
 * Write a program that takes in a number, and prints from 1 up to that number.
 * However, for every 10 numbers, there should be a new line.
 * There can be an extra space at the end of each line.
 * A line can be completely empty if required (e.g. entering 10, 20, 30 gives a new line).
 * You must have a new line at the end of your output!
 *
 * For example:
 *
 * oliver@computer: ./q1
 * Enter a number: 0
 *
 * oliver@computer: ./q1
 * Enter a number: 5
 * 1 2 3 4 5 
 * oliver@computer: ./q1
 * Enter a number: 10
 * 1 2 3 4 5 6 7 8 9 10
 *
 * oliver@computer: ./q1
 * Enter a number: 23
 * 1 2 3 4 5 6 7 8 9 10 
 * 11 12 13 14 15 16 17 18 19 20 
 * 21 22 23 
 * oliver@computer: 
 *
 * Compile using: gcc -Wall -Werror -O -o q1 q1.c
 * This can be automarked, running: ./mark q1
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // TODO(you): finish off this program!
    
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        if (i % 10 == 0) {
            printf("\n");
        }
        i++;
    }
    printf("\n");

    return EXIT_SUCCESS;
}
