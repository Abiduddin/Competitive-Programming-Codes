#include <bits/stdc++.h>
using namespace std;

long long int arr[102000];
long long unsigned fn( long long unsigned n ) {
   // if(n<0) return 0;
    if(arr[n]!=-1) return arr[n];
    return arr[n]=(fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))% 10000007;
}
int main() {
    //freopen("aa1.txt","w",stdout);
    long long unsigned n, caseno = 0, cases,p;
    scanf("%llu", &cases);
    while( cases-- ) {
        memset(arr,-1,sizeof(arr));
        scanf("%llu %llu %llu %llu %llu %llu %llu", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &n);
        //p=fn(n);
        printf("Case %llu: %llu\n", ++caseno, fn(n)%10000007);
    }
    return 0;
}
