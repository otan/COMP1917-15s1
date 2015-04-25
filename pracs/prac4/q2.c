/*
 * Sum all the elements in the array. 
 *
 * Compile using: gcc -Wall -Werror -O -o q2 q2.c
 * Mark using: ./mark q2
 */

#include <stdio.h>
#include <stdlib.h>

// Modify sum to sum all the elements in the array (there are n elements in arr)
int sum(int arr[], int n) {
    return 1337;
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
    printf("sum of array: %d\n", sum(arr, n));
    return EXIT_SUCCESS;
}
