#include <stdio.h>
int main()
{
    int n=0;
    char p[500]="012345";
    char q[500];
    printf("Please enter your password\n");
    while(1){
        gets(q);
        if(strcmp(p,q)==0){
            printf("Welcome! You logged in successfully\n");
            break;
        }
        else{
            n++;
            if(n==3){
                printf("Sorry, You have tried 3 times and failed to enter correct password\n");
                break;
            }
            printf("Incorrect password! please enter again\n");
            continue;
        }


    }
    return 0;
}
