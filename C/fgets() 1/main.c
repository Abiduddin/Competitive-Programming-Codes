#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int i;
    printf("Enter a string: ");
    fgets(str,10,stdin);
    i=strlen(str)-1;
    if(str[i]=='\n') str[i]='\0';
    printf("This is your string: %s",str);
    printf("Iam ok.");
    return 0;
}
//this remove \n new line what auto assign in gets/fgets.
