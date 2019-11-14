#include <stdio.h>
int main()
{
    //freopen("e:\\work place\\c\\a1.txt","r",stdin);
    //freopen("e:\\work place\\c\\a2.txt","w",stdout);

    int a,b,c,d;
    int aa[90];

    //scanf("%d",&d);
    //while(d>0){

    scanf("%d",&a);
    c=0;
    while(a>0){
        b=a%2;
        a=a/2;
        //printf("%d",b);
        aa[c]=b;
        c++;
    }


    c--;
    for(a=0;c>=0;c--){
        printf("%d",aa[c]);
    }
   // d--;
   // }

}
