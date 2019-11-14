#include <stdio.h>

/// An integer is a palindrome if the reverse of that
/// number is equal to the original number.
int main()
{
    int n,reverseInteger=0,remainder,originalInteger;

    printf("Enter an Integer: ");
    scanf("%d",&n);

    originalInteger=n;

    while(n!=0)
    {
        remainder = n%10;
        reverseInteger=reverseInteger*10+remainder;
        n=n/10;

    }

    if(originalInteger==reverseInteger)
        printf("%d is a palindrome.",originalInteger);
    else
        printf("%d is not a palindrome.",originalInteger);

    return 0;
}
