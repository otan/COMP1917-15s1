#include <stdio.h>
#include <stdlib.h>

#define Y_AXIS 12
#define X_AXIS 10

int main(int argc, char *argv[]) {
    int arr[Y_AXIS][X_AXIS] = { { 0 } };
    // arr[y][x]
    int y, x = 0;
    y = 0;
    while (y < Y_AXIS) {
        x = 0;
        while (x < X_AXIS) {
            printf("%d ", arr[y][x]);
            x++;
        }
        printf("\n");
        y++;
    }
    return EXIT_SUCCESS;
}
