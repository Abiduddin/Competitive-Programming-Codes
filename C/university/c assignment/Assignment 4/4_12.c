#include<stdio.h>
#include<stdlib.h>

#define N 10

int main()

{
    int i, x, t, j, a[N];

    FILE  *fp;
    fp=fopen("rand.txt", "w");

    for(i=1; i<=N; i++)
    {
        x=rand()%100;
        fprintf(fp,"%d\n", x);
    }


    fclose(fp);

    fp= fopen("rand.txt", "r");

    for(i=0; i<N; i++)
    {
        fscanf(fp,"%d", &a[i]);
    }
    fclose(fp);

    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(a[j]<a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }

    for(i=0; i<N; i++)
        printf("%d\n", a[i]);


    return 0;


}


