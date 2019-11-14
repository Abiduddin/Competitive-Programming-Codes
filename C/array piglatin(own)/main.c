#include <stdio.h>
#include <string.h>
int main()
{
    char word[100],piglatin[100];
    int i,j,k,len;
    printf("Enter your sentence: ");
    scanf("%[^\n]",word);
    len=strlen(word);
    word[len]=' ';
    i=0;
    j=0;
    k=1;
    while(i<len){
        while(word[k]!=' '){
            piglatin[j++]=word[k++];
            //k++;
        }
        piglatin[j++]=word[i];
        piglatin[j++]='a';
        piglatin[j++]=' ';
        i=k+1;
        k+=2;
    }
    printf("\nThe piglatin : ");
    for(i=0;i<j;i++)
        printf("%c",piglatin[i]);
}
