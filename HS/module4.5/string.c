#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 5

void print_string(char *string) {
    printf("%s\n", string);
}

void reverse_string(char string[], int string_length) {
    int i = 0;
    while (i < string_length / 2) {
        char temp = string[i];
        string[i] = string[string_length - i - 1];
        string[string_length - i - 1] = temp;
        i++;
    }
}

/*
 * int array[5] = {1,2,3,4,5};
 * array = {1,2,3,4,5};
 */
int main(int argc, char *argv[]) {
    char str[ARRAY_SIZE] = "asdf";
    print_string(str);
    return EXIT_SUCCESS;
}
