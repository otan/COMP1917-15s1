#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// void reverse(char *str, char *str2)
char *reverse(char *str) {
    char *str2 = malloc(sizeof(char) * 100);
    strcpy(str2, str);

    int len = 0/*strlen(str)*/;
    while (str2[len] != 0) {
        len++;
    }

    int i = 0;
    while (i < len / 2) {
        swap(&str2[i], &str2[len-i-1]);
        i++;
    }

    return str2;
}

int main(int argc, char *argv[]) {
    char *str = "hello, !";
    printf("%s\n", str);
    /*char str2[100];
    reverse(str, str2);*/
    char *str2 = reverse(str);
    printf("%s %s\n", str, str2);
    free(str2);
    return 0;
}
