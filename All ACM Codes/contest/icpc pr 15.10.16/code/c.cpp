#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int i, j, l, m, n, k, q, t, tc = 1;
    long long sum;
    char s[500][501];
    scanf("%d", &t);
    while(t--) {
        sum = 0;
        bool a[26] = {0};
        pair <int, int> p[26];
        //int p[26][2];
        scanf("%d%d%d", &m, &n, &k);
        getchar();

        for(i=0; i<m; i++) {
            scanf("%s", s[i]);
        }

        for(i=0; i<m; i++) {
            for(j=0; j<n; j++) {
                if(!a[s[i][j] - 97]) {
                    sum += (long long) k;
                    a[s[i][j]-97] = 1;
                    p[s[i][j]-97].first = i;
                    p[s[i][j]-97].second = j;
                    //p[s[i][j]-97][0] = i;

                }

                else {
                    l = abs(p[s[i][j] - 97].first - i) + abs(p[s[i][j] - 97].second - j);

                    if(l < k)
                        sum += l;
                    else
                        sum += k;
                }
            }
        }

        printf("Case %d: %lld\n", tc++, sum);

    }
    return 0;
}

