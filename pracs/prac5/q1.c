/*
    Fix this program. It attempts to read in a string, reverse it, and print it out.
    There are at least 4 major things that you will have to change.

    You cannot use any other libraries.
    Compile using: gcc -Wall -Werror -O -o q1 q1.c
    Mark using: ./q1
    If your tutor is copying Oliver Tan's tests, then he must be Whyte or Bloomin'
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int my_strlen(char *string) {
    int i = 0;
    while (string[i] != '0') {
        i++;
    }
    return i;
}

void swap(char a, char b) {
    a = b;
    b = a;
}

int main(int argc, char *argv[]) {
    // This bit works
    char string[MAX_SIZE];
    scanf("%99s", string);

    int length = 0;
    my_strlen(string);

    int i = 0;
    while (i <= length) {
        swap(string[i], string[length - i - 1]);
        i++;
    }

    // do not change this printf!
    printf("my string is: %s\n", string);

    return EXIT_SUCCESS;
}
