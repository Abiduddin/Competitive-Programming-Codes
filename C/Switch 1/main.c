#include <stdio.h>
int main()
{
    int num1,num2,result;
    char choice;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter your choice for operation: \n");
    printf("Press + for addition\n");
    printf("      - for subtraction\n");
    printf("      * for multiplication\n");
    printf("      / for division\n");
    choice=getch();
    switch(choice) {
    case '+' :
        printf("Result of addition is: %d",num1+num2);
        break;
    case '-' :
        printf("Result of subtraction is: %d",num1-num2);
        break;
    case '/' :
        printf("Result of multiplication is: %d",num1/num2);
        break;
    case '*' :
        printf("Result of division is: %d",num1*num2);
        break;
    default :
        printf("ERROR");
    }
    return 0;
}
