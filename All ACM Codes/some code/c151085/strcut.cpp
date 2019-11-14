#include <stdio.h>

char strct(char a[],char b[])
{
    int i=0,j=0;
    while(1)
    {
        if(a[i]=='\0')
        {
           // j=0;
            while(a[j]!='\0')
            {
                a[i]=b[j];
                i++;
                j++;
            }
            printf("Final string: ");
            return (puts(a));
        }
        i++;
    }

}
int main()
{
    char a[100],b[100];
    int i,j,k,l;
    printf("Enter 1st string: ");
    gets(a);
    printf("Enter 2nd string: ");
    gets(b);
    //printf("Final result: %s",strct(a,b));
    strct(a,b);
    return 0;
}
