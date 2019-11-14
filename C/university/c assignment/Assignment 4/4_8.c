#include<stdio.h>

void sort(int *p, int n)
{
    int i,j,t;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
            if(p[j] < p[i])
            {
                t= p[j];
                p[j]=p[i];
                p[i]=t;
            }
    }

}

int main()
{
    int a[5]= {9,2,8,-6}, i;

    sort(&a[0], 4);

    for(i=0; i<4; i++)
        printf("%d ", a[i]);

    return 0;
}

