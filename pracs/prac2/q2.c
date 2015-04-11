/*
   Write a program that prints a square banner!
   This is when on each even row, each even number (from 0) is starred, and
        on each odd row, each odd number is coloured;
   An example of what it looks like is below.
 
   oliver@computer: ./q2
   Enter a number: 1
   *
   oliver@computer: ./q2
   Enter a number: 2
   *
    *
   oliver@computer: ./q2
   Enter a number: 3
   * *
    *
   * *
   oliver@computer: ./q2
   Enter a number: 5
   * * *
    * * 
   * * *
    * * 
   * * *
   oliver@computer: ./q2
   Enter a number: 8
   * * * * 
    * * * *
   * * * * 
    * * * *
   * * * *  
    * * * *
   * * * * 
    * * * *

   Compile using: gcc -Wall -Werror -O -o q2 q2.c
   This can be automarked, running: ./mark q2
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int row, col;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // TODO(you): finish off this program!
    return EXIT_SUCCESS;
}
