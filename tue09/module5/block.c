#include <stdio.h>
#include <stdlib.h>

#define NUMBERS 10
void print_stars(int nums[]) {
    int i = 0;
    while (i < NUMBERS) {
        int j = 0;
        while (j < nums[i]) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(int argc, char *argv[]) {
    printf("Enter %d numbers:\n", NUMBERS);
    
    int nums[NUMBERS];
    int i = 0;
    while (i < NUMBERS) {
        scanf("%d", &nums[i]);
        // i[nums] same things
        i++;
    }
    print_stars(nums);
    return 0;

}
