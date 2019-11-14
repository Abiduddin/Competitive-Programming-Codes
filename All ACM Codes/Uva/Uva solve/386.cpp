#include <stdio.h>

int main()
{
    //freopen("aa1.txt","w",stdout);
    register int k,l;
    int i,j;

    for(i=3;i<=200;i++)
        for(j=2;j<200;j++)
        for(k=j+1;k<200;k++)
        for(l=k+1;l<200;l++)
    {
        if(i*i*i==(j*j*j+k*k*k+l*l*l))
        {
            printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
        }
    }
    return 0;
}
