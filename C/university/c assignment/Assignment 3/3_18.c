#include<stdio.h>

int main()
{
    int p, q, a, b, n, gcd, lcm;
    scanf("%d%d", &p, &q);

    a = p;
    b = q;

    while(a%b != 0)
    {
        n = a%b;
        a = b;
        b = n;
    }
    gcd = b;
    lcm = p*(q/gcd);

    printf("LCM = %d\n", lcm);

    return 0;
}

