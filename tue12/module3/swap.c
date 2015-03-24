#include <stdio.h>
#include <stdlib.h>

int real_swap(int *a, int *b) {
    printf("swapping %d (%p) and %d (%p)\n", *a, a, *b, b);
    int temp = *b;
    *b = *a;
    *a = temp;
    printf("swapped to %d %d\n", *a, *b);
}

void fucked_swap(int a, int b) {
    printf("swap received %d (%p) %d (%p)\n", a, &a, b, &b);
    int temp = b;
    b = a;
    a = temp;
    printf("i have swapped %d %d\n", a, b);
}

int main(int argc, char *argv[]) {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    printf("The two numbers are %d (%p) %d (%p)\n", x, &x, y, &y);
    real_swap(&x, &y);
    printf("Now they are %d %d\n", x, y);
    return 0;
}
