#include <stdio.h>
#include <stdlib.h>

typedef int poop;

typedef struct _date {
    int day;
    int month; 
    int year;
} date;

void printDate(struct _date myDate) {
    myDate.day = 23;
    printf("%d %d %d\n", myDate.day, myDate.month, myDate.year);
}

int main(int argc, char *argv[]) {
    poop a = 4;
    printf("%d\n", a);

    date myDate;
    myDate.day = 22;
    myDate.month = 4;
    myDate.year = 2015;

    printDate(myDate);
    printf("%d %d %d\n", myDate.day, myDate.month, myDate.year);

    return EXIT_SUCCESS;
}
