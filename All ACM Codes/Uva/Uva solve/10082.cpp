#include <stdio.h>
#include <string.h>

char aa[10000000];

int main()
{
//    freopen("aa.txt","r",stdin);
//    freopen("aa1.txt","w",stdout);
    register int j,i;
    char ch,a[45][2]={{' ',' '},{'[','P'},{'P','O'},{'O','I'},{'I','U'},{'U','Y'},{'Y','T'},{'T','R'},{'R','E'},{'E','W'},{'W','Q'},{';','L'},{'L','K'},{'K','J'},{'J','H'},{'H','G'},{'G','F'},{'F','D'},{'D','S'},{'S','A'},{',','M'},{'M','N'},{'N','B'},{'B','V'},{'V','C'},{'C','X'},{'X','Z'},{'=','-'},{'-','0'},{'0','9'},{'9','8'},{'8','7'},{'7','6'},{'6','5'},{'5','4'},{'4','3'},{'3','2'},{'2','1'},{'1','`'},{']','['},{'.',','},{'/','.'},{'\\',']'}};
    int k,l;


    //scanf("%c",&ch);

    while(gets(aa))
    {
        //printf("OK\n");
        l=strlen(aa);
    for(j=0;j<l;j++){
            k=1;
        for(i=0;i<43;i++){
            if(aa[j]==a[i][0])
            {
            printf("%c",a[i][1]);
            k=0;
            //printf("OK\n");
            }
        }

        if(k)
            printf(";");

    }
    printf("\n");
    }


}
