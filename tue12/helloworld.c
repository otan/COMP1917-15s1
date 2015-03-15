#include <stdio.h>
#include <stdlib.h>

int addTwo(int x) {
    return x + 2;
}

int main(int argc, char *argv[]) {
    int a;
    a = 2;
    printf("enter a numbers: ");
    scanf("%d", &a);
    
    if (a % 5 == 0) {
        printf("YES\n");
        int b = 2;
        printf("%d\n", b);
    } else if (a % 5 == 1) {
        printf("MAYBE\n");
    }
    
    return 0;
}
