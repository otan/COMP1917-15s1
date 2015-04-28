#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(int argc, char *argv[]) {
    char string[100];
    scanf("%99s", string);

    Stack s = newStack();
    int i = 0;
    while (string[i] != 0) {
        push(s, string[i]);
        i++;
    }

    i = 0;
    while (getSize(s) > 0) {
        string[i] = top(s);
        pop(s);
        i++;
    }

    freeStack(s);

    printf("%s\n", string);
    return 0;
}
