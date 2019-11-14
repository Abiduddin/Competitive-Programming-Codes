#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a,b,c,d,e,f,g,k;
    //int
    b=0;c=0;d=0;e=0;f=0;g=0;
    scanf("%d",&a);
    while(b<=a){
        b=pow(2,c);
        c++;
    }
    d=k=c-1;
    printf("%d\n",d);
    char aa[k];
    while(e<=a){
        f=f+pow(2,d-1);
        if(f<=a){
            aa[g]='1';
            //g++;
            //d--;
        }
        else{
            aa[g]='0';
            //g++;
            //d--;
        }
        g++;
        d--;
        e++;
        f++;
    }
    puts(aa);
}
