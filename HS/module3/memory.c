#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);

int main (int argc, char* argv[]) {
    int n = 5;
    int m = 7;
    // 5 7
    printf("%d %d\n", n, m);

    swap(&n, &m);
    // 7 5
    printf("%d %d\n", n, m);

    return EXIT_SUCCESS;
}

void swap(int* a, int *b) {
    printf("I'M INSIDE SWAP\n");
    printf("%d %d\n", *a, *b);
    int temp = *b;
    *b = *a;
    *a = temp;
    printf("%d %d\n", *a, *b);
    printf("LEAVING SWAP\n");
}
