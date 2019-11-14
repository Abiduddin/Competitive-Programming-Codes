#include <stdio.h>
int main()
{
    int input,year,month,day;
    printf("Enter the number of day: ");
    scanf("%d",&input);
    year=input/365;
    month=(input%365)/30;
    day=(input%365)%30;

    printf("Years: %d\n",year);
    printf("Months: %d\n",month);
    printf("Days: %d\n",day);
}
