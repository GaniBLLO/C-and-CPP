#include<stdio.h>

static const char daytab[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31},
};

//day_of_year
int day_of_year(int year, int month, int day) {
    int i, leap;
    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
        for (i = 1; i < month; i++) {
            day += daytab[leap][i];
        }
        return day;
}
//month_day
void month_day(int year, int yearday, int* pmonth, int* pday) {
    int i, leap;
    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    for (i = 1; yearday > daytab[leap][i]; i++) {
        yearday -= daytab[leap][i];
    }
    *pmonth = i;
    *pday = yearday;
}

int main()
{
    int day = 16, month = 5;
   
    month_day(1988, 60, &month, &day);
    return 0;
}
