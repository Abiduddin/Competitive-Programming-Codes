#include <bits/stdc++.h>
using namespace std;

int printDivisors(int n)
{
    int z=0,k;

    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {


            if (n/i == i)
            {
                if(i%2 != 0)
                    z++;
            }

            else
            {
                if((n/i)%2 != 0)
                    z++;
                if(i%2 != 0)
                    z++;
            }
        }
    }
    if(z%2!=0)
        return n;
    else
        return 0;
}

/* Driver program to test above function */
int main()
{
    int x,j=1;
    printf("The divisors of 100 are: \n");
    for(int i=2; i<=10000; i++)
    {

        x = printDivisors(i);
        if (x!=0)
        {
            cout<<x-j<<" ";
            j=x;
        }

    }
    return 0;
}
