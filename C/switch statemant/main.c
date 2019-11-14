#include <stdio.h>

int main()
{
    int score, grade;

    printf("\n\a Enter your score: ");
    scanf("%d", &score);
    //grade=score/10;
    switch(score)
        {
            case 10:
            case 9:
                printf("\n\a Your grade is A.");
                break;
            case 8:
                printf("\n\a Your grade is B.");
                break;
            default:
                printf("\n\a your grade is F.");
                break;
        }
}
