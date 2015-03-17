#include <stdio.h>
#include <assert.h>

int addTwo(int x) {
    return x + 2;
}

int main(int argc, char *argv[]) {
    assert(addTwo(5) == 7);
    assert(addTwo(8) == 10);

    return 0;
}
