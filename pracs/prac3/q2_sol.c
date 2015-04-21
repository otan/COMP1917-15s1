/*
 * Past practical exam question in 2014s1
 *
 * Given an odd number, print out an X
 *
 * NOTE: Each line should have the odd number of characters.
 *
 * I will NOT test even number cases.
 *
 * oliver@computer: ./q2
 * Enter a number: 1
 * #
 * oliver@computer: ./q2
 * Enter a number: 3
 * # #
 *  #
 * # #
 * oliver@computer: ./q2
 * Enter a number: 5
 * #   #
 *  # #
 *   #
 *  # #
 * #   #
 * oliver@computer: ./q2 9
 * #       #
 *  #     #
 *   #   #
 *    # #
 *     #
 *    # #
 *   #   #
 *  #     #
 * #       #
 *
 * Compile using: gcc -Wall -Werror -O -o q2 q2.c
 * Run using: ./mark q2
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int row = 0;
    while (row < n) {
        int col = 0;
        while (col < n) {
            if (row == col || col == n - row - 1) {
                printf("#");
            } else {
                printf(" ");
            }
            col++;
        }
        printf("\n");
        row++;
    }
    return EXIT_SUCCESS;
}
