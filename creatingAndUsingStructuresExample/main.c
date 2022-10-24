/*
Author: Billy Gene Ridgeway
Date:   Oct. 24th., 2022
Purpose:    Practice creating and using structures.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct date     // Declare struct date, no memory is allocated.
{
    int month;
    int day;
    int year;
};

int main()
{
    struct date today;  // Declare struct date today, now memory is allocated for the 3 members.

    today.month = 10;
    today.day = 24;
    today.year = 2022;

    printf("\nToday's date is: %i %i %.2i.\n", today.month, today.day, today.year % 100);

    int century = today.year/100 + 1;
    printf("This century is the %ist. \n", century);

    struct date date1 = {12, 10};
    printf("Date1 is: %i %i\n", date1.month, date1.day);

    struct date date2 = {.year = 2021, .month = 04, .day = 11};
    printf("Date2 is: %i %i %.2i\n", date2.month, date2.day, date2.year % 100);

    struct date date3 = {.year = 1962};
    printf("\nDate3's date is: %.2i.\n", date3.year % 100);

    struct date today2 = (struct date) {9,25,2015};
    printf("Today2 is: %i %i %.2i\n", today2.month, today2.day, today2.year % 100);

    return 0;
}