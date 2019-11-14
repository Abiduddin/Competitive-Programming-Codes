#include <stdio.h>

#define DOG
int main()
{
    #ifdef DOG
    printf("DOG is define.\n");
    #endif // DOG
    #undef DOG
    #ifdef DOG
    printf("Thia line is not compiled.\n");
    #endif // DOG

    return 0;
}
