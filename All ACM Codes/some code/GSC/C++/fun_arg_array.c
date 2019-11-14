#include <stdio.h>
void printarray (int arg[],int lenglh);
int main ()
{
  int firstarray[] = {1, 2, 3,4,5},i;
  freopen("p.out","w",stdout);
   printarray (firstarray,5);
   printf("After function calling: ");
   for(i=0;i<5;i++)
    printf("%d ",firstarray[i]);
  return 0;
}
void printarray (int arg[], int length) {
    int n;
  for (n=0; n<length; ++n)
  {
    printf("%d ", arg[n]);
    arg[n]=arg[n]+1;
  }
  printf("\n");
}
