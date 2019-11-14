#include<bits/stdc++.h>
using namespace std;
int N = 3;

void multiply(int A[][], int B[][], int C[][])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < N; k++)
			{
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
}
//void calculate(int  a[])
//{
//    int sum = 90;
//    for(int i=0; i<3;i++)
//    {
//        a[i]+=sum;
//        sum+=9;
//    }
//
//}

int main()
{
    int a,b,c[]={1,2,3},v[10];

    calculate(c);
    for(int i=0; i<3;i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;


}
