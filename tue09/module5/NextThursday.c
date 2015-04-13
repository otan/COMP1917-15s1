// Name: Oliver Tan, CSE user: otan028
// Tutor: YanJin (NSBHS)
// Date: 13th March 2011
// Determines the amount of days before until Thursday given the date

// Based off NextThursday.h v1.1
#include "NextThursday.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// On the hypothetical year 0, the doomsday is Tuesday
#define REFERENCE_YEAR 0
#define REFERENCE_DAY 5

#define DAYS_IN_WEEK 7

#define JANUARY 1
#define FEBRUARY 2
#define MARCH 3
#define MAY 5
#define JULY 7
#define SEPTEMBER 9
#define NOVEMBER 11

#define JANUARY_DOOMSDAY 3
#define FEBRUARY_DOOMSDAY 7
#define MARCH_DOOMSDAY 7
#define MAY_DOOMSDAY 9
#define JULY_DOOMSDAY 11
#define SEPTEMBER_DOOMSDAY 5
#define NOVEMBER_DOOMSDAY 7

#define FALSE 0
#define TRUE 1

void testDoomsday (void);

// first, we must know the date, month and year from the user.
// this is passed on to the function daysToNextThursday 
// in which we then display the final output from the returned value
int testmain (int argc, char* argv[]) {
   int date;
   int month;
   int year;
   int daysRemaining;
   
   // test if normally it works first...
   testDoomsday();
   
   // Request the information off the user
   printf("Enter the date (e.g. 22 in 22/09/1994) for testing: ");
   scanf("%d", &date);
   printf("Enter the month (e.g. 9 in 22/09/1994) for testing: ");
   scanf("%d", &month);
   printf("Enter the year (e.g. 1994 in 22/09/1994) for testing: ");
   scanf("%d", &year);
   
   // year must be > gregorian calendar
   assert(year > START_GREGORIAN_CALENDAR);
      
   // obtaining the results from daysToNextThursday. We get the days
   // remaining from Tuesday
   daysRemaining = daysToNextThursday(year, month, date);
   printf("%d day(s) left until next Thursday!\n", daysRemaining);
   
   return EXIT_SUCCESS;
}

#define CALENDAR_HACK 35

// given the doomsday for a year, and whether or not it is a 
// leap year, this function return the day of the week for any
// given month and day in the year.
int dayOfWeek (int doomsday, int leapYear, int month, int day) {
   int daysFromDoomsdate; 
   // Doomsday Dates: 4/4, 5/9, 6/6, 7/11, 8/8, 9/5, 10/10, 11/7, 12/12
   // In a non-leap year, 3/1, 7/2 and 7/3 is the same day as the other
   // Doomsday dates. In a leap year, February and January's doomsday
   // is +1 day. This segment uses these facts to find the days.
   if (month == JANUARY) {
      daysFromDoomsdate = day - (JANUARY_DOOMSDAY + leapYear);
   } else if (month == FEBRUARY) {
      daysFromDoomsdate = day - (FEBRUARY_DOOMSDAY + leapYear);
   } else if (month == MARCH) {
      daysFromDoomsdate = day - MARCH_DOOMSDAY;
   } else if (month == MAY) {
      daysFromDoomsdate = day - MAY_DOOMSDAY;
   } else if (month == JULY) {
      daysFromDoomsdate = day - JULY_DOOMSDAY;
   } else if (month == SEPTEMBER) {
      daysFromDoomsdate = day - SEPTEMBER_DOOMSDAY;
   } else if (month == NOVEMBER) {
      daysFromDoomsdate = day - NOVEMBER_DOOMSDAY;
   } else {
      daysFromDoomsdate = day - month;
   }
   
   return (doomsday + daysFromDoomsdate + CALENDAR_HACK) % DAYS_IN_WEEK;
}

// given a year > START_GREGORIAN_CALENDAR this function returns
// 1 if it is a leap year and 0 otherwise
// Function adapted from isLeapYear(int year) done in Lab02 with
// Janette Chiu and tutor YanJin
int isLeapYear (int year) {
   // Conditions of being a leap year:
   // - Anything divisible by 400 is true
   // - Anything divisible by 4 but not 100 is.
   int leapYear = FALSE;
   if (year % 400 == 0) {
      leapYear = TRUE;
   } else if ((year % 4 == 0) && (year % 100 != 0)) {
      leapYear = TRUE;
   }
   return leapYear;
}

// given a year > START_GREGORIAN_CALENDAR this function returns
// the doomsday for that year (a number in the range 0..6)
// 0 denoting Thursday, 1 Friday ... 6 Wednesday.
int yearToDoomsday (int year) { 
   int doomsday;
   
   // The initial day difference is equal to the year difference.
   int yearDifference = year - REFERENCE_YEAR;
   int dayDifference = yearDifference; 
   
   // However, since every leap year adds an extra day, doomsday is
   // moved one day forward every four years. However, it is NOT a leap
   // year every 100 years, as those are not leap years, hence the 
   // subtraction, but still is every 400 years, hence the addition.
   dayDifference = dayDifference + (yearDifference / 4); 
   dayDifference = dayDifference - (yearDifference / 100);
   dayDifference = dayDifference + (yearDifference / 400);
   
   // We determine the doomsday by adding the dayDifference from the 
   // REFERENCE_DAY of the REFERENCE_YEAR as an anchor, and mod it by 
   // DAYS_IN_WEEK so we get a value between 0 and 6.
   doomsday = (REFERENCE_DAY + dayDifference) % DAYS_IN_WEEK; 
   return doomsday;
}

// given a date after START_GREGORIAN_CALENDAR this function returns
// the number of days until the next thursday.
// eg for 16 March 2011 (2011,3,16)  the function will return 1
// eg for 17 March 2011 (2011,3,17)  the function will return 7
int daysToNextThursday (int year, int month, int day) {
   // Return other functions before we can determine the day of the 
   // week with the dayOfWeek function as it requires those variables
   int leapYear = isLeapYear(year);
   int doomsday = yearToDoomsday(year);
   int dayNumber = dayOfWeek(doomsday, leapYear, month, day);
   
   // We determine days remaining by taking away dayNumber from
   // DAYS_IN_WEEK. Since dayNumber is equal to or less than 6, we
   // get a result between 1-7, which is what we want.
   int daysRemaining = (DAYS_IN_WEEK - dayNumber);
   return daysRemaining;
}

// program testing - check for isLeapYear, daysToNextThursday,
// yearToDoomsday and dayOfWeek. Do not use defines; they can be
// biased if the code is wrong!
void testDoomsday (void) {
   // Test isLeapYear for extreme conditions: 2000, 1900, 2004, 2001
   assert(isLeapYear(2000));
   assert(!isLeapYear(1900));
   assert(isLeapYear(2004));
   assert(!isLeapYear(2001));
   
   // test for yearToDoomsday on year 2011, 2012, 2013
   // leap year should skip ahead one day....
   assert(yearToDoomsday(2011) == 4);
   assert(yearToDoomsday(2012) == 6);
   assert(yearToDoomsday(2013) == 0);
   
   // test dayOfWeek on 30 days months, one 31 day month, and first 3
   // months, with one day before and after the doomsday of that month,
   // and the first two months for leapYears. Check against day before 
   // doomsday (One less day before that on Leap Years)
   assert(dayOfWeek(4, 0, 5, 8) == 3);
   assert(dayOfWeek(4, 0, 5, 15) == 3);
   assert(dayOfWeek(4, 0, 7, 10) == 3);
   assert(dayOfWeek(4, 0, 7, 17) == 3);
   assert(dayOfWeek(4, 0, 9, 4) == 3);
   assert(dayOfWeek(4, 0, 9, 11) == 3);
   assert(dayOfWeek(4, 0, 11, 6) == 3);
   assert(dayOfWeek(4, 0, 11, 13) == 3);
   
   assert(dayOfWeek(4, 0, 4, 3) == 3);
   assert(dayOfWeek(4, 0, 4, 10) == 3);
   
   assert(dayOfWeek(4, 0, 1, 2) == 3);
   assert(dayOfWeek(4, 0, 1, 9) == 3);
   assert(dayOfWeek(4, 0, 2, 6) == 3);
   assert(dayOfWeek(4, 0, 2, 13) == 3);
   assert(dayOfWeek(4, 0, 3, 6) == 3);
   assert(dayOfWeek(4, 0, 3, 13) == 3);
   
   assert(dayOfWeek(6, 1, 1, 2) == 4);
   assert(dayOfWeek(6, 1, 1, 9) == 4);
   assert(dayOfWeek(6, 1, 2, 6) == 4);
   assert(dayOfWeek(6, 1, 2, 13) == 4);
   
   // test for daysToNextThursday based on a Thursday, normal day
   // and Leap Year
   assert(daysToNextThursday(2011, 3, 16) == 1);
   assert(daysToNextThursday(2011, 3, 17) == 7);
   assert(daysToNextThursday(2012, 2, 29) == 1);
}
