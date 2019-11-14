#include <stdio.h>
#include <time.h>

int main()
{
    struct tm *ame;
    time_t k;

    k=time(NULL);
    ame=localtime(&k);

    printf("Time: %.2d:%.2d:%.2d\n",ame->tm_hour,ame->tm_min,ame->tm_sec);
    printf("Date: %.2d/%.2d/%.2d",ame->tm_mday,ame->tm_mon+1,ame->tm_year);

    return 0;
}
