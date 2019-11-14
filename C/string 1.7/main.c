#include <stdio.h>
#include <string.h>
int main()
{

    int i,j,n,m,k;

    printf("line: ");
    scanf("%d",&n);
    getchar();
    char aa[n][500];

    for(i=0;i<n;i++){
        printf("Enter your line: \n");
        gets(aa[i]);
        m=strlen(aa[i]);
        aa[i][m]=' ';
        k=1;
        for(j=0;j<m;j++){

            if(aa[i][j]==' '){
                k++;

            }
        }
        printf("total : %d\n",k*420);
    }
   return 0;
}
