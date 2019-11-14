#include <stdio.h>

void promt(char *msg, int *num);
int main()
{
    int i;
    promt("Enter a num: ",&i);
    printf("Your number is %d",i);

    return 0;
}
void promt(char *msg, int *num)
{
    printf(msg);
    scanf("%d",num);
}
