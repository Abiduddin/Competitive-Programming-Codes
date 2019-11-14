#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int main()
{
	vector<int>v;
	int n,i;
	v.clear();
	scanf("%d",&n);
	while(n)
	{
		v.push_back(n%2);
		n/=2;
	}
	//v.pop_back();
	for(i=v.size()-1;i>=0;i--)
		printf("%d",v[i]);
	//v.insert(v[1],3); // insert 3 in v[1];position is not replace
	printf("\n");
	for(i=v.size()-1;i>=0;i--)
		printf("%d",v[i]);
	// erase  the 2nd element
	v.erase(v.begin()+1);
	printf("\nAfter erase 2nd :");
	for(i=v.size()-1;i>=0;i--)
		printf("%d",v[i]);
	// erase  the first 2 elements
	v.erase(v.begin(),v.begin()+2);
	printf("\nAfter erase first 2 elements : ");
	for(i=v.size()-1;i>=0;i--)
		printf("%d",v[i]);
return 0;
}
