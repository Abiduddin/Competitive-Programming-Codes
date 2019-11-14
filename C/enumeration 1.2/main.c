#include <stdio.h>

enum computer {keyboard,CPU,screen,printer};

int main()
{
    enum computer com;
    com=screen;
    printf("%d",com);
    return 0;
}
