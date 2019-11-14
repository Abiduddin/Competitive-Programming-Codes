#include <stdio.h>

int find_substr(char *s1,char *s2);

int main()
{
    if(find_substr("C++ is fun","fun")!=EOF)
        printf("Substring is found");
    return 0;
}

int find_substr(char *s1,char *s2)
{
    char *p1,*p2;
    register int t;

    for(t=0;s1[t];t++){
        p1=&s1[t];
        p2=s2;

        while(*p2&&*p2==*p1){
            p1++;
            p2++;
        }
        if(!*p2) return t;


    }
    return -1;

}
