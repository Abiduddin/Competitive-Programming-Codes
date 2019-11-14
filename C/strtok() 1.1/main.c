#include <stdio.h>
#include <string.h>

int main()
{
    char mm[]="111    -33 333    22";
    char *wr;
    wr=strtok(mm," ");
    printf("%s\n",wr);
    while((wr=strtok(NULL," "))!=NULL)
        printf("%s\n",wr);

    return 0;
}
