#include <stdio.h>
#define DAYS 365
#define HOURS 24
#define SECONDS 3600

int main()
{
    long my_year = 10;
    long my_days = my_year * DAYS;
    long my_hours = my_year * DAYS * HOURS;
    long my_seconds = my_year * DAYS * HOURS * SECONDS;
    
    printf("Тики: %ld | Часы: %ld | Дни: %ld | Годы: %ld\n", my_seconds, my_hours, my_days, my_year);

    return 0;
}
