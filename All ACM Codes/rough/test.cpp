#include<bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("aaa.txt","w",stdout);
    int selectNum,categoryNum,course[2000],i,j,k,total,must,p,p1;



    while(scanf("%d",&selectNum)&&selectNum){
//        if(!selectNum)
//            break;
        scanf("%d",&categoryNum);

        for(i=0;i<selectNum;i++)
            scanf("%d",&course[i]);
        j=0;
        p1=categoryNum;
        while(categoryNum--)
        {
            scanf("%d %d",&total,&must);
            //j=0;
            p=0;
            while(total--)
            {
                scanf("%d",&k);

                for(i=0;i<selectNum;i++)
                {
                    if(k==course[i])
                    {
                        p++;
                        break;
                    }
                    if(p==must)
                        break;
                }

            }
            if(must==p){
                    j++;
                }

        }

        if(j==p1)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
