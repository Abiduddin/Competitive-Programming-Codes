#include <stdio.h>
#define MAX(i,j) i>j?i:j

int main()
{
    printf("%d\n",MAX(1,2));
    printf("%d\n",MAX(1,-1));
    //this statement does not work correctly
    printf("%d\n",MAX(100&&-1,0));
    return 0;
}
//correct from is #define MAX(i,j) ((i)>(j))?(i):(j)
