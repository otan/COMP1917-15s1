/*
 * Practical exam question in 2013s2
 *
 * Complete the function "minInArray", which finds the minimum in the array.
 * If the array size is 0, return the maximum number possible (hint: limits.h)
 *
 * Compile using: gcc -Wall -Werror -O -o q1 q1.c
 * Mark using: ./mark q1
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // INT_MAX

int minInArray(int array[], int n) {
    int min = INT_MAX;
    int i = 0;
    while (i < n) {
        if (array[i] < min) {
            min = array[i];
        }
        i++;
    }
    return min;
}

// =============== YOU DON'T HAVE TO TOUCH THE MAIN!
int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    while (i < n) {
        scanf("%d", &arr[i]);
        i++;
    }
    printf("minimum in array: %d\n", minInArray(arr, n));
    return EXIT_SUCCESS;
}
