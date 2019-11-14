#include<iostream>
#include<sstream>
#include<cstdio>
using namespace std;

int main()
{

	char s[100];
	int a[10000],x;

	gets(s);

	istringstream ch(s);
	int i=0;
	while(ch>>x) a[i++]=x;

	printf("\n");
	for(int j=0;j<i;j++)
		printf("%d ",a[j]);
return 0;
}
