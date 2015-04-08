#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 0;
    double num = 0;

    printf("Enter a number to increment by: ");
    double increment = 0;
    scanf("%lf", &increment);

    printf("increment is %lf\n", increment);
    while (num < 2.0) {
        printf("%d: %lf\n", i, num); 
        num += increment;
        i++;
    }
    printf("finished at %d: %lf\n", i, num);
    return EXIT_SUCCESS;
}
