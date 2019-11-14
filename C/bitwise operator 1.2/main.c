#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    ch='a';
    int i;
    //display binary representation
    for(i=128;i>0;i=i/2)
        if(i&ch) printf("1 ");
        else printf("0 ");
    //reverse bit pattern
    ch=~ch;
    printf("\n");
    //display binary representation
    for(i=128;i>0;i=i/2)
        if(i&ch) printf("1 ");
        else printf("0 ");

    return 0;

}
