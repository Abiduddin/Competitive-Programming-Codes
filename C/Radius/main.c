#include <stdio.h>
#define PI 3.14159

float process(float r)
{
    float a;
    a= PI*r*r;
    return a;
}


 int main()
    {
    int n,i=0;
    float radius[100],area[100];
    printf("To STOP, enter 0 for the radius\n");
    printf("\nRadius= ?");
    scanf("%f",&radius[i]);
    while(radius[i]) {
        if (radius[i]<0)
            area[i]=0;
        else
            area[i]=process(radius[i]);
        //printf("Area= %f\n", area);
        printf("\nRadius = ?");
        scanf("%f", &radius[++i]);
    }
    n=--i;
    printf("\nSummary of Result\n\n");
    for(i=0;i<=n;++i){
        printf("Radius=%f  Area=%f\n",radius[i],area[i]);
    }


    }

