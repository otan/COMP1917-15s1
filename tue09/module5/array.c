#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main(int argc, char *argv[]) {
    int counters[ARRAY_SIZE] = { 0 };
    
    /*{0,0,0,0,0,0,0,0,0,0};
    int i = 0;
    while (i < ARRAY_SIZE) {
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

    int i;
    while (i < ARRAY_SIZE) {
        printf("%c: %d\n", '0' + i, counters[i]);
        i++;
    }
    return 0;
}
