#include <stdio.h>
void fun(int u,int v);
void fun2(int *pu,int *pv);
main()
{
    int u=1;
    int v=3;
    printf("\nBefore calling fun u= %d v= %d ",u,v);
    fun(u,v);
    printf("\nAfter calling fun 2 u= %d v= %d",u,v);
    printf("\n\nBefore calling fun2 u= %d v= %d",u,v);
    fun2(&u,&v);
    printf("\nAfter calling fun2 u= %d v= %d",u,v);
}
void fun(int u,int v)
{
    u=0;
    v=0;
    printf("\nWith in fun u= %d v= %d",u,v);
}
void fun2(int *pu,int *pv)
{
    *pu=0;
    *pv=0;
    printf("\nWith in fun2 *pu= %d *pv= %d",*pu,*pv);
}
