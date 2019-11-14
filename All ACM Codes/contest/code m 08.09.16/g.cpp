#include <stdio.h>
#include <math.h>

int main()
{
    float i,j,k,l;
    int t;
    l=acos(-1);
    while(scanf("%d",&t)!=EOF)
    {
        while(t--)
        {
            scanf("%f",&i);
            k=i/2;
            j=(((2*i)*i)-((l*k*k)+(l*k*k)))/2;
            printf("%.2f\n",j);

        }
    }
}
