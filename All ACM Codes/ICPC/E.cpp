#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n)
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
        cout<<n<<" "<<z<<endl;
}

/* Driver program to test above function */
int main()
{
    printf("The divisors of 100 are: \n");
    for(int i=0; i<=10000; i++)
    {


        if(i%1000==0)
            cout<<"------------"<<i<<"---------------------"<<endl;
        printDivisors(i);

    }
    return 0;
}
