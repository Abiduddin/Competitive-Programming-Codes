#include <stdio.h>

int main()
{
    int i,j,k,l,a,b,c,d;

    int aa[100],bb[100];

    scanf("%d",&i);

    for(j=0;j<i;j++)
        scanf("%d",&aa[j]);

    for (a = 0; a< i; a++) {
    for (b = 0; b< i; b++) {
    for (c = 0; c< i; c++) {
    for (d= 0; d< i; d++){
    if(b!=a && c!=a && c!=b && d!=a && d!=b && d!=c) {
        printf("%d %d %d %d\n",aa[a],aa[b],aa[c],aa[d]);


    }
    }}}}}
