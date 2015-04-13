#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
int main(int argc, char *argv[]) {
    char str[SIZE] = "abc";
    str[0] = 'b';
    str[1] = 'd';
    str[2] = 'f';
    strcpy(str, "bcd");
}
