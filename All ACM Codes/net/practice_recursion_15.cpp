#include <stdio.h>

void rev(int i)
{
    if(i==0)
    {
        printf("\n");
        return;
    }

    printf("%d",i%10);
    rev(i/10);
}

int main()
{
    int i,j,k;

    scanf("%d",&i);
    rev(i);

}
