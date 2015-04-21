#include <stdio.h>
#include <stdlib.h>

typedef int shitty;

typedef struct _date {
    int day;
    int month;
    int year;
} date;

void changeDate(struct _date myDate) {
    myDate.day = 4;
    printf("%d %d %d\n", myDate.day, myDate.month, myDate.year);
}

int main(int argc, char *argv[]) {
    shitty beard = 4;
    printf("%d\n", beard);

    date myDate;
    myDate.day = 1;
    myDate.month = 2;
    myDate.year = 4;

    changeDate(myDate);

    printf("%d %d %d\n", myDate.day, myDate.month, myDate.year);
    return EXIT_SUCCESS;
}
