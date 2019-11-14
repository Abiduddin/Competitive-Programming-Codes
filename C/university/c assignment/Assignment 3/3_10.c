#include<stdio.h>
int main()
{
    char str[80];
    int bgn, end, f=1;

    gets(str);
    bgn=0;
    end=strlen(str)-1;

    while(bgn<end)
    {
        if(str[bgn]!=str[end])
            f=0;
        bgn++;
        end--;
    }

    if(f==1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;


}
