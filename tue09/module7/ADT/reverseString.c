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

    /*
    (*s).size = 42;
    s->size = 42;
    */

    i = 0;
    while (getSize(s) > 0) {
        string[i] = top(s);
        pop(s);
        i++;
    }

    printf("%s\n", string);

    free(s);
    return 0;
}
