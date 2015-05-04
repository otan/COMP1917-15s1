#include <stdio.h>
#include <stdlib.h>

typedef struct _date {
    int day;
    int month;
    int year;
} date;

int main(int argc, char *argv[]) {
    date d;
    d.day = 42;
    d.month = 42;
    d.year = 1973;
    printf("%d/%d/%d\n", d.day, d.month, d.year);

    int a = 5;
    printf("a = %d\n", a);
    int *aptr = &a;
    printf("aptr of a = %d\n", *aptr);

    date *dptr = &d;
    printf("%d/%d/%d\n", (*dptr).day, (*dptr).month, (*dptr).year);
    dptr->day = 1337;
    printf("%d/%d/%d\n", dptr->day, dptr->month, dptr->year);
    return 0;
}
