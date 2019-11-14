#include <stdio.h>
#include <string.h>
int fun1(char word[])
{
    int len,i,j,indicator;
    char piglatin[100];
    len=strlen(word);
    word[len]=' ';          //last character (new line ) is replaced by space
    i=0;                    //starting position of original word.
    j=0;                    //starting position of piglatin.
    indicator=1;            //to indicate the position of processing character.
    while(i<len){
        /* replace characters from original word to piglatin until a
        space is found. */
        while(word[indicator]!=' '){
            piglatin[j++]=word[indicator];
            indicator++;
        }
        piglatin[j++]=word[i];
        piglatin[j++]='a';
        piglatin[j++]=' ';
        i=indicator+1;
        indicator+=2;
    }
    printf("\nThe piglatin is: "); //output the piglatin
    for(i=0;i<j;i++)
        putchar(piglatin[i]);
}
int main()
{
    char original[100],piglatin[100];
    printf("Enter a sentence : ");
    scanf("%[^\n]",original);
    fun1(original);
}
