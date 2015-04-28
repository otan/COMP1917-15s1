#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a = 0;
    printf("a = 0; a = %d\n", a);
    a++;
    printf("a++; a = %d\n", a);
    ++a;
    printf("++a; a = %d\n", a);

    printf("a++ = %d\n", a++);
    printf("a = %d\n", a); // a = 3
    printf("++a = %d\n", ++a);
    printf("a = %d\n", a); // a = 4

    int b = a++;
    printf("a = %d\n", a); // a = 5 
    printf("b = %d\n", b);
    
    int c = ++a;
    printf("a = %d\n", a);
    printf("c = %d\n", c);
    return EXIT_SUCCESS;
}
