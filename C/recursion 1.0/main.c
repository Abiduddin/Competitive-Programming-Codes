#include <stdio.h>
recurse(int i);
int main()
{
    recurse(0);
    return 0;
}
recurse(int i)
{
    if(i<10){
        recurse(i+1);
        printf("%d ",i);
    }
}
