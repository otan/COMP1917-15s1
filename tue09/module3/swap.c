#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    printf("entering this, it is %d (%p) %d (%p)\n", *a, a, *b, b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("exiting this, it is %d (%p) %d (%p)\n", *a, a, *b, b);
}

void fucked_swap(int a, int b) {
    printf("entering this, it is %d (%p) %d (%p)\n", a, &a, b, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("exiting this, it is %d %d\n", a, b);
}

int main(int argc, char *argv[]) {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    printf("The two numbers are %d (%p) %d (%p)\n", x, &x, y, &y);
    //fucked_swap(x, y);
    swap(&x, &y);
    printf("On return, they are %d %d\n", x, y);
    return 0;
}
