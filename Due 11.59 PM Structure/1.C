#include <stdio.h>
struct Date
{
    int day, month, year;
};
int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int daysInMonth(int month, int year)
{
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return days[month];
}
void addDays(struct Date *date, int daysToAdd)
{
    date->day += daysToAdd;
    while (date->day > daysInMonth(date->month, date->year))
    {
        date->day -= daysInMonth(date->month, date->year);
        date->month++;
        if (date->month > 12)
        {
            date->month = 1;
            date->year++;
        }
    }
}
int main()
{
    struct Date currentDate;
    printf("Enter the Day: ");
    scanf("%d", &currentDate.day);
    printf("Enter the Month: ");
    scanf("%d", &currentDate.month);
    printf("Enter the Year: ");
    scanf("%d", &currentDate.year);
    printf("Initial Date (dd/mm/yyyy): %d/%d/%d\n", currentDate.day, currentDate.month, currentDate.year);
    if (currentDate.day <= 0 || currentDate.day > daysInMonth(currentDate.month, currentDate.year) ||
        currentDate.month <= 0 || currentDate.month > 12 || currentDate.year < 1950 || currentDate.year > 2050)
    {
        printf("Error: Invalid date\n");
        return 1;
    }
    int daysToAdd = 45;
    addDays(&currentDate, daysToAdd);
    printf("Final Date after adding %d days: %d/%d/%d\n", daysToAdd, currentDate.day, currentDate.month, currentDate.year);
    return 0;
}