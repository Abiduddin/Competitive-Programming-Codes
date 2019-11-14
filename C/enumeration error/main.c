#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

enum transport {car,train,airplane,bus} tp;

int main()
{
    printf("Press a key to select transport: ");
    // generate a new random number each time the program is run

    while(!kbhit()) rand();
    getchar();   //read and discard character

    tp=rand()%4;
    switch(tp)
    {
    case car:
        printf("Car");
        break;
    case train:
        printf("Train");
        break;
    case airplane:
        printf("Airplane");
        break;
    case bus:
        printf("Bus");

    }
    return 0;
}
