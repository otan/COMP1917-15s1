#include <stdio.h>

#define SIZE 100

char *giveMeString(void) {
    char *str  = malloc(sizeof(char) * SIZE);
    strcpy(str, "STRING!!!!");
    return str;
}

int addTwo(int a, int b) {
    return a + b;
}

int main(int argc, char *argv[]) {
    char *str = giveMeAString();

    // blah blah happy blah
    //
    free(str);
}
