//#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int t;
    float i,j,k;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f%f",&i,&j,&k);
        i=sqrt(i*i+j*j);
        printf("%.2f %.2f\n",k-i,k+i);

    }


    return 0;


}
