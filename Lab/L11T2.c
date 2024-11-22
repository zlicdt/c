#include <stdio.h>
struct date {
    int month;
    int day;
    int year;
} data;
int isLeapYear(unsigned year) {
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}
int isLongMonth(unsigned month) {
    unsigned LongMonth[7] = {1, 3, 5, 7, 8, 10, 12};
    for (int i = 0; i < 7; i++) {
        if (month == LongMonth[i]) return 1;
    }
    return 0;
}
struct date findNextDay(int month, int day, int year) {
    if(isLongMonth(month)) {
        if (day == 31) {
            if (month == 12) {
                month       = 1;
                year       += 1;
                day         = 1;
            } else {
                month      += 1;
                day         = 1;
            }
        } else {
            day            += 1;
        }
    } else {
        if (day == 30) {
            day             = 1;
            month          += 1;
        } else if (day == 29) {
            if (month == 2) {
                month      += 1;
                day         = 1;
            } else {
                day        += 1;
            }
        } else if (day == 28) {
            if (month == 2) {
                if (isLeapYear(year)) {
                    day    += 1;
                } else {
                    month  += 1;
                    day     = 1;
                }
            } else {
                day        += 1;
            }
        } else day         += 1;
    }
    struct date nextDay = {month, day, year};
    return nextDay;
}
int main() {
    printf("Input a date by the order of month, day, year: ");
    scanf("%d %d %d", &data.month, &data.day, &data.year);
    if (data.month < 1 || data.month > 12) {
        printf("Warning! Month input should be ranging in [1, 12].\n");
        return 0;
    }
    // If it is not a real date
    if (data.day < 1 || data.day > 31) {
        printf("Warning! Date input is not real.\n");
        return 0;
    }
    if (data.year < 1) {
        printf("Warning! Year input should be positive.\n");
        return 0;
    }
    if (!isLeapYear(data.year)) {
        if ((data.month == 2) && (data.day > 28)) {
            printf("Warning! Date input is not real.\n");
            return 0;
        }
    } else {
        if ((data.month == 2) && (data.day > 29)) {
            printf("Warning! Date input is not real.\n");
            return 0;
        }
    }
    // For leap year, month 2 has 29 days
    struct date res = findNextDay(data.month, data.day, data.year);
    // Just use pointer to deliver the result
    printf("The next day of input date is %d/%d/%d.\n", res.month, res.day, res.year);
    return 0;
}