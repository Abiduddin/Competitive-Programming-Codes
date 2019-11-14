#include <stdio.h>
int main()
{
    char word[80];
    int i,l,j,a;
    a=0;
    scanf("%s", word);
    j=strlen(word);
    for(i=0,l=j-1;i<j/2;i++,l--){
        if(word[i]==word[l]){
            a=a+1;
        }
        else{
            a=a+0;
        }
    }
    //printf("  j %d\n  a %d\n",j,a);
    if(j/2==a){
        printf("%s is a palindrome.\n", word);
    }
    else {
        printf("%s is not a palindrome.\n",word);
    }
    //printf("\n%s",word);
    return 0;
}
