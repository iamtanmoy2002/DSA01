#include <stdio.h>
typedef struct
{
    int second;
    int hour;
    int minutes;
} time;

time diffTime(time start, time stop)
{
    time diff;
    if(stop.second > start.second)
    {
        
        start.second = start.second + 60;
        diff.second = start.second - stop.second;
        start.minutes--;
    }
    else
    {
        diff.second = start.second - stop.second;
    }
    
    if(stop.minutes > start.minutes)
    {
        
        start.minutes = start.minutes + 60;
        diff.minutes = start.minutes - stop.minutes;
        start.hour--;
    }
    else
    {
        diff.minutes = start.minutes - stop.minutes;
    }
    diff.hour = start.hour - stop.hour;

    return diff;
}
int main()
{
    time startT,stopT,diffT;

    printf("Enter the start time :\n");
    printf("Enter hour,minute and second : \n");
    scanf("%d %d %d",&startT.hour,&startT.minutes,&startT.second);

    printf("\n");

    printf("Enter the stop time :\n");
    printf("Enter hour,minute and second : \n");
    scanf("%d %d %d",&stopT.hour,&stopT.minutes,&stopT.second);
    printf("\n");

    diffT=diffTime(startT,stopT);
    printf("%d :",diffT.hour);
    printf("%d :",diffT.minutes);
    printf("%d",diffT.second);

    printf("\n");

    return 0;
}