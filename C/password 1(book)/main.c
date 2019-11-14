#include <stdio.h>
#include <stdlib.h>
int get_password(int chance);
int main()
{
    int chance=1,ok;
    do{
        ok=get_password(chance);
        chance++;
    }while(!ok);
    printf("Hi\n");
    printf("You are the required person.I am waiting for you.");
}
int get_password(int chance)
{
    char password[10]="jahangir";
    char userpass[10];
    printf("Enter a password: ");
    scanf("%s", userpass);
    if(strcmp(userpass,password)==0){
        return 1;
    }
    if(chance==3){
        printf("You have failed three times\n");
        printf("Press any key to exit the program\n");
        exit(1);
    }
    printf("Invalid password !! Try again\n\n");
    return(0);


}
