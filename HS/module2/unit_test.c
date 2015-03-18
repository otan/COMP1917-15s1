#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int addTwo(int x);

int main(int argc, char *argv[]) {
    printf("%d\n", addTwo(4));
    assert(addTwo(0) == 2);
    assert(addTwo(1) == 3);
    assert(addTwo(44) == 46);
    return EXIT_SUCCESS;
}

int addTwo(int x) {
    return x + 2;
}


