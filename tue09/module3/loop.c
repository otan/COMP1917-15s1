#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int row = 0;
    int col = 0;
    
    while (row < n) {
        col = 0;
        while (col < n) {
            if (col != 4 && col != 5) {
                printf("*");
            } else {
                printf(" ");
            }
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
