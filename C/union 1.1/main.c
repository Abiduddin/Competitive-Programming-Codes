#include <stdio.h>

int encode(int i);

int main()
{
    int i;
    i=encode(10);  //encode it
    printf("10 encode is %d\n",i);
    i=encode(i);    //decode it
    printf("i decode is %d",i);

    return 0;
}
//encode an integer, decode an encoded integer

int encode(int i)
{
    union crypt_type
    {
        int num;
        char c[2];
    } crypt;

    unsigned char ch;

    crypt.num=i;
    //swap bytes
    ch=crypt.c[0];
    crypt.c[0]=crypt.c[1];
    crypt.c[1]=ch;
    //return encoded integer
    return crypt.num;
}
