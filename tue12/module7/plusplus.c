#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a = 0;
    printf("a = 0; a = %d\n", a);
    a++;
    printf("a++; a = %d\n", a);
    ++a;
    printf("++a; a = %d\n", a); // a = 2

    printf("a++ = %d\n", a++);
    printf("a = %d\n", a); // a = 3

    printf("++a = %d\n", ++a);
    printf("a = %d\n", a); // a = 4 

    int b = a++;
    printf("a = %d\n", a); // a =  5
    printf("b = %d\n", b); // b = 4
    
    int c = ++a;
    printf("a = %d\n", a); // a = 6
    printf("c = %d\n", c); // c = 6
    return EXIT_SUCCESS;
}
