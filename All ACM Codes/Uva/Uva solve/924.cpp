#include <bits/stdc++.h>
using namespace std;

bool visitedEmpy[2510];
int main()
{
    register int i;
    int numEmpy,maxDay,maxNum,frndNum,testCase,temp,node,day,num,j,k;
    vector<int > frndList[2510];

    scanf("%d",&numEmpy);
    for(i=0;i<numEmpy;i++)
    {
        scanf("%d",&frndNum);
        while(frndNum--)
        {
            scanf("%d",&temp);
            frndList[i].push_back(temp);
        }
    }
    scanf("%d",&temp);

    while(temp--)
    {

        scanf("%d",&testCase);
        memset(visitedEmpy,0,sizeof(visitedEmpy));
        vector<int> level;
        maxDay=maxNum=num=0;

        queue<int> qu;

        qu.push(testCase);
        qu.push(-1);
        visitedEmpy[testCase]=1;

        while(!qu.empty())
        {
            node=qu.front();
            qu.pop();
            k=frndList[node].size();
            for(i=0;i<k;i++)
            {
                j=frndList[node][i];

                if(visitedEmpy[j]==0)
                {

                    qu.push(j);
                    visitedEmpy[j]=1;
                    num++;
                }
            }
            if(!qu.empty())
            if(qu.front()==-1)
            {
                qu.pop();
                level.push_back(num);
                num=0;
                if(!qu.empty())
                    qu.push(-1);
            }

        }

        for(i=0;i<level.size();i++)
        {
            if(maxNum<level[i])
            {
                maxNum=level[i];
                maxDay=i+1;
            }
        }

        if(maxNum==0)
            printf("0\n");
        else
            printf("%d %d\n",maxNum,maxDay);



    }

}
