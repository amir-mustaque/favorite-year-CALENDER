#include<stdio.h>
int getFirstDayOfTheyear(int year){
    int day = (year+365 + ((year-1)/4)-((year-1)/100)+ ((year-1)/400))%7;
    return day;
}
int main()
{
    char*month[]={"january","febuary","march","april","may","june","july","august","september","october","november","decmeber"};
    int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,totaldDays,weekDay =0 ,spaceCounter =0,year;
    printf("enter your favourite year:\n");
    scanf("%d",&year);
    printf("\n\n*****************   WELCOME TO %d  *************************\n\n",year);
    if((year%4==0&& year % 100 !=0 )|| (year %400 ==0))
    {
        daysInMonth[1]=29;
    }
    weekDay = getFirstDayOfTheyear(year);
     
    for(i=0;i<12;i++)
    { 
        printf("\n\n\n------------------------- %s -------------------------------\n",month[i]);
        printf("\n      sun  mon  tue  wed   thu   fri   sat \n\n");
        for(spaceCounter=1;spaceCounter <=weekDay; spaceCounter++)
            {
                printf("      ");
             }
        totaldDays=daysInMonth[i];
        for(j=1;j<=totaldDays;j++)
            {
                printf("%6d", j);
                weekDay++;
                if(weekDay>6)
                    { weekDay=0;
                     printf("\n");
                    }
            }
    }
    
}
    