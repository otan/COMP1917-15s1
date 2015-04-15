#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main(int argc, char *argv[]) {
    printf("Enter ten numbers: ");
    int numbers[ARRAY_SIZE];
    int i = 0;
    int j;
    while (i < ARRAY_SIZE) {
        scanf("%d", &numbers[i]);
        i++;
    }

    i = 0;
    while (i < ARRAY_SIZE) {
        j = 0;
        while (j < numbers[i]) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return EXIT_SUCCESS;
}
