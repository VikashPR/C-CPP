#include <stdio.h>
struct Time
{
    int seconds;
    int minutes;
    int hours;
};

void calcDiff(
    struct Time t1,
    struct Time t2,
    struct Time *diff);

int main()
{
    struct Time startTime, stopTime, diff;
    scanf("%d:%d:%d", &startTime.hours,
        &startTime.minutes,
        &startTime.seconds);

    scanf("%d:%d:%d", &stopTime.hours,
        &stopTime.minutes,
        &stopTime.seconds);

    calcDiff(startTime, stopTime, &diff);
    printf("%d:%d:%d\n", diff.hours,
        diff.minutes,
        diff.seconds);
    return 0;
}

// Computes difference between time periods
void calcDiff(struct Time start,
                                struct Time stop,
                                struct Time *diff)
{
    while (stop.seconds > start.seconds)
    {
        --start.minutes;
        start.seconds += 60;
    }
    diff->seconds = start.seconds - stop.seconds;
    while (stop.minutes > start.minutes)
    {
        --start.hours;
        start.minutes += 60;
    }
    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}