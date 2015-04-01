#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
    char c;
    int count = 0;
    while (c != EOF) {
        c = getchar();
        count++;
    }
    printf("you entered EOF! EOF is %d\n", EOF);
    printf("you entered %d characters\n", count);
    return EXIT_SUCCESS;
}
