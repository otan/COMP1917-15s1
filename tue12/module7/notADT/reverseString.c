#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(int argc, char *argv[]) {
    char string[100];
    scanf("%99s", string);

    stack s = newStack();
    int i = 0;
    while (string[i] != 0) {
        s = push(s, string[i]);
        i++;
    }

    i = 0;
    while (s.size > 0) {
        string[i] = top(s);
        s = pop(s);
        i++;
    }

    printf("%s\n", string);
    return 0;
}
