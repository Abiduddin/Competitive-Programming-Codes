#include <bits/stdc++.h>
using namespace std;

int main()
{
    char number[30],revNumber[30];
    int num1,num2,strLength;

    gets(number);
    strLength=strlen(number)-1;
    while(number[strLength]=='0')
    {
        number[strLength]='\0';
        strLength--;
    }
    num1=atoi(number);
    strrev(number);

    num2=atoi(number);

    //printf(" %d %d %s",num1,num2,number);
    if(num1==num2)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;


}
