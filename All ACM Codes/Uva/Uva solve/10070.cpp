#include<stdio.h>
#include<string.h>

int main()
{
    char a[100000];
    int i,j=2,l,m1,m2,m3,m4,m5,k;


    while(gets(a))
    {
        if(j!=2)
            printf("\n");
        m1=m2=m3=m4=m5=j=0;
        k=1;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            m1=((m1*10)+(a[i]-'0'))%400;
            m2=((m2*10)+(a[i]-'0'))%4;
            m3=((m3*10)+(a[i]-'0'))%100;
            m4=((m4*10)+(a[i]-'0'))%15;
            m5=((m5*10)+(a[i]-'0'))%55;
        }
        if(m1==0||(m2==0&&m3!=0)){
            printf("This is leap year.\n");
            j=1;
            k=0;
        }
        if(m4==0){
            printf("This is huluculu festival year.\n");
            k=0;
        }
        if(j==1&&m5==0){
            printf("This is bulukulu festival year.\n");
            k=0;
        }
        if(k==1)
            printf("This is an ordinary year.\n");

    }
    return 0;

}

