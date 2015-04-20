#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *message) {
    int length = 0;
    while (message[length] != 0) {
        length++;
    }

    int i = 0;
    while (i < length / 2) {
        char temp = message[i];
        message[i] = message[length - i - 1];
        message[length - i - 1] = temp;
        i++;
    }
}

char *reverse_copy(char *message) {
    char *str2 = malloc(sizeof(char) * 100);
    strcpy(str2, message);
    reverse(str2);
    return str2;
}

int main(int argc, char*argv[]) {
    char str[100] = "abcdefgh";
    char str2[100];
    strcpy(str2, str);
    printf("%s %s\n", str, str2);
    char *str3 = reverse_copy(str);
    printf("%s %s\n", str, str3);
    free(str3);
    return EXIT_SUCCESS;
}
