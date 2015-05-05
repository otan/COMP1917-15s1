#include <stdio.h>
#include <stdlib.h>

#define X_AXIS 13
#define Y_AXIS 10

int main(int argc, char *argv[]) {
    int arr[Y_AXIS][X_AXIS] = { { 0 } };
    // arr[y][x]
    int y = 0;
    while (y < Y_AXIS) {
        int x = 0;
        while (x < X_AXIS) {
            // arr[y][x] = 0;
            printf("%d ", arr[y][x]);
            x++;
        }
        printf("\n");
        y++;
    }
    return 0;
}
