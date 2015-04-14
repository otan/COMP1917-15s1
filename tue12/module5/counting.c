#include <stdio.h>

#define ARRAY_SIZE 10
int main(int argc, char *argv[]) {
    int counters[ARRAY_SIZE] = { 0 };

    int i = 0;
    /*while (i < ARRAY_SIZE) {
        counters[i] = 0;
        i++;
    }*/

    char ch = getchar();
    while (ch != EOF) {
        if (ch >= '0' && ch <= '9') {
            counters[ch - '0']++;
        }
        ch = getchar();
    }

    while (i < ARRAY_SIZE) {
        printf("%c: %d\n", i + '0', counters[i]);
        i++;
    }
    return 0;
}
