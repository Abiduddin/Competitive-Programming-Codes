#include <stdio.h>
int main()
{
    freopen("E:\\Work Place\\C\\File 2\\a.txt","r",stdin);
    freopen("e:\\work place\\c\\File 2\\a2.txt","w",stdout);
    int num1,num2,fun;
    while(2==scanf("%d%d",&num1,&num2)) {
        fun=num1+num2;
        printf("%d\n",fun);
    }
    return 0;
}
