#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l,t,d,m,y,rd=0,rm=0,ry=0,yd=30000,ym=30000,yy=30000;
    char aa[20],bb[20],cc[20];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s %d %d %d",&aa,&d,&m,&y);

        if((rd<=d&&rm<=m&&ry<=y)||(ry<y)||(rm<m&&ry<=y))
        {
            rd=d;
            rm=m;
            ry=y;
            strcpy(bb,aa);

        }
        if((yd>=d&&ym>=m&&yy>=y)||(yy>y)||(ym>m&&yy>=y))
        {
            yd=d;
            ym=m;
            yy=y;
            strcpy(cc,aa);

        }
    }
    puts(bb);
    puts(cc);
}
