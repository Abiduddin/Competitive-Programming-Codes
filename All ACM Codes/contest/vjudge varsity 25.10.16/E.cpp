#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,t,a[10000];


    while(scanf("%d",&t))
    {
        if(!t)
            break;
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }

    stack<int > st;
    j=1;

    for(i=0;i<t;i++)
    {

        if(j==a[i])
        {
            j++;
        }
//        else if((!st.empty())&&j==st.top())
//
//        {
//
//            while((!st.empty())&&j==st.top())
//            {
//                st.pop();
//                j++;
//            }
//        }
        else
        {
            st.push(a[i]);
        }



            while((!st.empty())&&j==st.top())
            {
                st.pop();
                j++;
            }

    }



    if(!st.empty())
        printf("no\n");
    else
        printf("yes\n");

    }


    return 0;
}
