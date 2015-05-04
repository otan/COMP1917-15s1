#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    char arr[400];
    while (scanf("%399s", arr) != EOF) {
        printf("%s\n", arr);
    }
    return 0;
}
