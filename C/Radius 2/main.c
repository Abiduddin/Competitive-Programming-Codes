#include <stdio.h>
#define PI 3.14159
float process(float r){
    float a;
    a=PI*r*r;
    return(a);
}
struct circle {
            char text[20];
            float radius;
            float area;
};

int main()
{
    int n,i=0;
    struct circle a[10];



    printf("To stop, enter END for the identifier\n");
    printf("\nIdentifier: ");
    scanf("%s",a[i].text);
    while(a[i].text[0]!='E'||a[i].text[1]!='N'||a[i].text[2]!='D') {
        printf("Radius: ");
        scanf("%f", &a[i].radius);
        if (a[i].radius<0)
            a[i].area=0;
        else
            a[i].area=process(a[i].radius);
        ++i;
        printf("\nIdentifier: ");
        scanf("%s",a[i].text);

    }
    n=--i;
    printf("\n\nSummary of Result\n\n");
    for(i=0;i<=n;++i)
        printf("%s radius=%f area=%f\n",a[i].text,a[i].radius,a[i].area);
}
