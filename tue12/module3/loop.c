#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    /*int value = (2 < 5);
    int value2 = (2 < -5);
    printf("%d %d\n", value, value2);*/
    int n = 10;
    scanf("%d", &n);

    int row = 0;
    while (row < n * 2) {
        int col = 0;
        while (col < n) {
            if (col == 2 || col == 3) {
                printf(" ");
            } else {
                printf("*");
            }
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
