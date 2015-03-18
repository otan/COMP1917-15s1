#include <stdio.h>

int main(int argc, char *argv[]) {
    int china;
    printf("please enter a number: ");
    scanf("%d", &china);
    china = china % 5;
    
    if (china == 2) {
        printf("YES\n");
    } else if (china == 4) {
        printf("MAYBE\n");
    } else {
        printf("NO\n");
    }
    
    // prints a
    printf("the remainder is %d\n", china);
    return 0;
}
