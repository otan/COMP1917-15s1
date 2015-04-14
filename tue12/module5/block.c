#include <stdio.h>

#define ARRAY_SIZE 10

void print_stars(int numbers[]) {
    int i;

    i = 0;
    while (i < ARRAY_SIZE) {
        int j = 0;
        while (j < numbers[i]) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(int argc, char*argv[]) {
    int numbers[ARRAY_SIZE];

    int i = 0;
    while (i < ARRAY_SIZE) {
        scanf("%d", &numbers[i]);
        i++;
    }
    print_stars(numbers);
    return 0;
}
