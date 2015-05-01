#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "stack.h"

int main(int argc, char *argv[]) {
    Stack s = newStack();
    assert(s != NULL);
    assert(getSize(s) == 0);

    push(s, 4);
    assert(getSize(s) == 1);
    assert(top(s) == 4);

    printf("ALL TEST PASSED!\n");
    return 0;
}
