#include <stdio.h>
int main()
{
    int num1,num2,result;
    char choice,response;
    printf("Use + for addition\n    - for subtraction\n    * for multiplication\n    / for division\n");
    do{
        printf("\nEnter first number: ");
        scanf("%d", &num1);
        printf("\nEnter second number: ");
        scanf("%d", &num2);
        printf("\nPlease enter your choice: ");
        choice=getch();
        switch(choice)
        {
        case '+':
                {result=num1+num2;
                printf("\nAddition is : %d",result);
                break;}
        case '-':
                {if(num1>num2)
                    result=num1-num2;
                else
                    result=num2-num1;
                printf("\nSubtraction is : %d",result);
                break;}
        case '*':
                {result=num1*num2;
                printf("\nMultiplication is : %d",result);
                break;}
        case '/':
                {if(num1>num2)
                    result=num1/num2;
                else
                    result=num2/num1;
                printf("\nDivision is : %d",result);
                break;}
        }
        printf("\nInput again? : ");
        response=getch();
    }while(response!='n'&&response!='N');
    return 0;
}
