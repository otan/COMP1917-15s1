#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
    int i = 0;
    while (i <= 100) {
        int b = i + 1;
        if (i % 2 == 1) {
            int c = b + 1;
            printf("%d\n", b);
            printf("%d\n", i);
        }

        printf("%d\n", b);
        i++;
    }
    printf("%d\n", b);

    return EXIT_SUCCESS;
}

void hi() {
    printf("%d\n", i);
}
