#include <stdio.h>
int main()
{
    FILE *change, *done;
    change=fopen("a.txt","r");
    done=fopen("a2.txt","w");
    int a,b,fun;
    fscanf(change,"%d%d",&a,&b);
    printf("a= %d\nb= %d\n",a,b);
    fun=a+b;
    fprintf(done,"The sum is: %d\n",fun);
    fclose(change);
    fclose(done);

    return 0;
}
