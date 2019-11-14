
#include <stdio.h>
#include <string.h>

void encrypt_password(char *);

int main()
{
    char pass[80];
    printf("Enter your password: ");
    gets(pass);
    encrypt_password(pass);
    printf("\nThe encrypted version of your password is: ");
    puts(pass);
}
void encrypt_password(char *pass)
{
    while(*pass!='\0')
        *pass++^=52;         //52 is mask value
}
