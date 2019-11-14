#include<stdio.h>
#include<math.h>

int main()
{
    int bin, dec, p, q, c=-1;

    scanf("%d", &bin);

    dec=0;

    while(bin)
    {
        p=bin/10;
        q=bin%10;
        ++c;
        dec += q * pow(2,c);
        bin=p;
    }

    printf("%d\n", dec);

    return 0;


}

