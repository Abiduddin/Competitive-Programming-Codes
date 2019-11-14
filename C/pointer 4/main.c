#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char ch1[]="Road No 9,House No 214,chandgaon R/A, Chittagong, Bangladesh";
    char *ch2;
    ch2=ch1;
    fun(ch2);
}
int fun(char ch[])
{
    int len,i=0,vowel=0,consonant=0,digit=0,other=0;
    char c;
    len=strlen(ch);
    for(i=0;i<len;i++){
        c=tolower(ch[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            vowel++;
        else if(c>='b'&&c<='z')
            consonant++;
        else if(c>='0'&&c<='9')
            digit++;
        else
            other++;
    }
    printf("The string is : %s",ch);
    printf("\nVowel=%d consonant=%d Digit=%d Others=%d",vowel,consonant,digit,other);
}
