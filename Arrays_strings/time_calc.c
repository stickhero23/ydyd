#include <stdio.h>

typedef struct Time
{
    int hours;
    int minutes;
    int seconds;
} time_calc;

time_calc elapsed_time(time_calc, time_calc);

time_calc elapsed_time(time_calc t1, time_calc t2)
{
    time_calc td;

    td.seconds = t2.seconds - t1.seconds;
    td.minutes = t2.minutes - t1.minutes;
    td.hours = t2.hours - t1.hours;

    if (td.seconds < 0)
    {
        td.seconds += 60;
        --td.minutes;
    }
    if (td.minutes < 0)
    {
        td.minutes += 60;
        --td.hours;
    }
    if (td.hours < 0)
    {
        td.hours += 24;
    }
    
    return td;
    
}

int main()
{
    time_calc time1 = {3, 45, 15};
    time_calc time2 = {9, 44, 4}; 
    
    time_calc time_d;

    time_d = elapsed_time(time1, time2);

    printf("%i hours, %i minutes, %i seconds\n", time_d.hours, time_d.minutes, time_d.seconds);

    return 0;


}