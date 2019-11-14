#include <stdio.h>
#include <stdlib.h>

int main()
{
    int magic,i=1;
    int guess;
    printf("\t** WELCOME TO MAGIC NUMBER GAME **");
    printf("\n\t\t** LEVEL %d **\n",i);
    g: magic=rand();

    while(1){
        //magic=rand();
        //later
        printf("Guess the magic number(enter 0 for exit): ");
        scanf("%d",&guess);
        if(guess==magic){
            i++;
            printf("\a\n\t\t** Right **\n");
            printf("\t\t** LEVEL %d **\n",i);

            goto g;
        }
        if(guess==0){
            printf("\n\t\t** OPPS!! **\n\t\t** SEE YOU LATER **");
            printf("\n\n\t\t** @ABID GAMES **");
            break;
        }
        else{
            printf("Wrong, ");
            if(guess>magic) printf("too high.\n");
            else printf("too low.\n");
        }
    }
}
