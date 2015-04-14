#include <stdio.h>
#include <stdlib.h>

#define TIMES 100
int main(int argc, char *argv[]) {
    printf("Enter a number to increment by: ");
    double increment = 0;
    scanf("%lf", &increment);

    printf("increment by each time %lf, until i reach %lf (%d)\n",
            increment, increment * TIMES, TIMES);

    int i = 0;
    double num = 0;
    //while (num < TIMES * increment) {
    while (i < TIMES) {
        printf("%d: %lf\n", i, num); 
        num += increment;
        i++;
    }
    printf("finished at %d: %lf\n", i, num);
    return EXIT_SUCCESS;
}
