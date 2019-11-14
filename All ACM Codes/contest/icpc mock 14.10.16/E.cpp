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
    int m, i, j, mx, mn, t, p, q;
    int n;
    while(scanf("%d", &n) != EOF) {
        mx = -1, mn = 20000;
        i= 1;
        while(n--) {
            scanf("%d", &p);
            mx = p>mx? p : mx;
            mn = p<mn? p : mn;
            double a, b;
            a = (double) mx;
            b = (double) mn;
            printf("Case %d: %.2lf\n", i++, a/b);
        }
    }
    return 0;
}

