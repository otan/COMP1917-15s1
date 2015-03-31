/*
 * Write a program that takes in a number, and prints all numbers from 1 to that number
 * inclusive that is either odd, or divisible by 5.
 *
 * For example:
 *
 * oliver@computer: ./prac1 
 * Enter a number: 13
 * 1
 * 3
 * 5
 * 7
 * 9
 * 10
 * 11
 * 13
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
    
    int i =1;
    while (i <= n) {
        if (i % 5 == 0 || i % 2 == 1) {
            printf("%d\n", i);
        }
        i++;
    }
    return EXIT_SUCCESS;
}
