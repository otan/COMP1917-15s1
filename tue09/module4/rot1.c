#include <stdio.h>
#include <stdlib.h>

char rot1(char encode) {
    if (encode >= 'A' && encode <= 'Y') {
        encode++;
    } else if (encode == 'Z') {
        encode = 'A';
    } else if (encode >= 'a' && encode <= 'y') {
        encode++;
    } else if (encode == 'z') {
        encode = 'a';
    }
    return encode;
}

int main(int argc, char *argv[]) {
    char c;
    c = getchar();
    // scanf("%c", &c);
    while (c != EOF) {
        putchar(rot1(c));
        // printf("%c", rot1(c));
        c = getchar();
    }
    return 0;
}
