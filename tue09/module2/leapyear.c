// A program that tells you whether a year is a leap year or not
// Lisa Li
// 09 March 2015

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define START_OF_GREG_CALENDAR 1582

int isLeapYear(int year);

int main (int argc, char* argv []) {
    int year;

    printf ("Please enter a year\n");
    scanf ("%d", &year);
    assert (year >= START_OF_GREG_CALENDAR);

    if (isLeapYear(year)) {
        printf("is a leap year\n");
    } else {
        printf("is not a leap year\n");
    }
    return 0;

}

int isLeapYear(int year) {
    int isLeap;
    if (year % 4 == 0) {
        if (year % 400 == 0) {
            isLeap = 1;
        } else if (year % 100 != 0) {
            isLeap = 1;
        }
    }
    return isLeap;
}

// isLeapYear returns whether or not a year is a leap year
int isLeapYearOneLine(int year) {
    // This is checking whether this is a leap year.
    // The rules are:
    // --0--
    return (year % 4) == 0 && ((year % 400) == 0 || (year % 100) != 0) ; 
}


