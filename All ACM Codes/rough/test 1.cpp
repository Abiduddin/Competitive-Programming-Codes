#include<stdio.h>
int main(){
    int P, Q, Y, result;
    scanf("%d %d %d", &P, &Q, &Y);
    //put your result using the values of P, Q and Y
    result= 5 * 52 * P * Y + 52 * 2 * Q * Y;

    printf("%d\n", result);
    return 0;
}
