#include <bits/stdc++.h>


int main()
{
    int i,j,l,c=0,t;
    char a[200];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        j=0;
        gets(a);
        l=strlen(a);
        for(i=0;i<l;i++)
            if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x')
                j+=2;
            else if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y')
            j+=3;
            else if(a[i]=='s'||a[i]=='z')
            j+=4;
            else
            j+=1;

        printf("Case #%d: %d\n",++c,j);
    }
    return 0;
}
