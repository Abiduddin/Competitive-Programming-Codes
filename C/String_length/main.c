#include <stdio.h>
int string_length(char str[])
{
    int i,length=0;
    for(i=0;str[i]!='\0';i++) {
        length++;
    }
    return length;
}

int main()
{
    char country[100],bd[100];

    int length,length2;
    while(2==scanf("%s%s",country,bd)) {
        length=string_length(country);
        length2=string_length(bd);
        printf("Length: %d\nLength: %d\n",length,length2);
    }
    return 0;
}
