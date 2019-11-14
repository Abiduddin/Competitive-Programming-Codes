#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    long long i, j, n, t;
    scanf("%lld", &t);
    while(t--) {
    scanf("%lld", &n);
    if(n >= 0) {
        for(i=0; i<=n; i++) {
        if(i != n)
            printf("%lld ", i);
        else
            printf("%lld", i);
        }
    }
    else {
        for(i=n; i<=0; i++) {
            if(i != 0)
                printf("%lld ", i);
            else
                printf("%lld", i);
        }
    }
     printf("\n");
    }
    return 0;
}

