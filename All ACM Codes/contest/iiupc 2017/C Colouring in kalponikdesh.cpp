#include<bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
#define ff first
#define ss second

int main()
{
    int row,clm,i,j,k,l,t,key,total;
    queue<pi> qu;
    pi p,p1;

    cin>>t;
    while(t--)
    {
        cin>>row>>clm>>key;
        i=key;
        while(i--)
        {
            cin>>p.ff>>p.ss;
            qu.push(p);
        }
        p.ff=-11;
        p.ss=-11;
        qu.push(p);
        total=0;
        bool vst[1010][1010]={0};

        while(!qu.empty())
        {
            p=qu.front();
            if(p.ff==-11&&p.ss==-11)
            {
                qu.pop();
                total++;
                if(!qu.empty()){
                    qu.push(p);
                    p=qu.front();
                }
                else
                    break;
            }
            vst[p.ff][p.ss]=1;

            p1.ff=p.ff+1;
            p1.ss=p.ss;
            if(p1.ff>0&&p1.ss>0&&p1.ff<=row&&p1.ss<=clm)
            if(vst[p1.ff][p1.ss]==0)
                qu.push(p1);

            p1.ff=p.ff-1;
            p1.ss=p.ss;
            if(p1.ff>0&&p1.ss>0&&p1.ff<=row&&p1.ss<=clm)
            if(vst[p1.ff][p1.ss]==0)
                qu.push(p1);

            p1.ff=p.ff;
            p1.ss=p.ss-1;
            if(p1.ff>0&&p1.ss>0&&p1.ff<=row&&p1.ss<=clm)
            if(vst[p1.ff][p1.ss]==0)
                qu.push(p1);

            p1.ff=p.ff;
            p1.ss=p.ss+1;
            if(p1.ff>0&&p1.ss>0&&p1.ff<=row&&p1.ss<=clm)
            if(vst[p1.ff][p1.ss]==0)
                qu.push(p1);

            qu.pop();

        }

        cout<<total-1<<endl;


    }

    return 0;
}
