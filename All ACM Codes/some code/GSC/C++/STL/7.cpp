#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
bool cmpf(int x,int y)
{
	return (x>y);
}
int main()
{
	vector<int>v;
	//vector<int> v1(10);
    int n;

	for(int i=0;i<5;i++)
    {
        scanf("%d",&n);

		v.push_back(n);
    }

	printf("\nBefore soft :");
	for( int i=0;i<v.size();i++)
		printf("%d ",v[i]);

	sort(v.begin(),v.end()); //ascendring

    printf("\nAfter  soft :");
	for( int i=0;i<v.size();i++)
		printf("%d ",v[i]);

	if(binary_search(v.begin(),v.end(),15))
		cout<<"\nFound.";
	else
	 cout<<"Not Found.";

	sort(v.rbegin(),v.rend());//decreasing order
		printf("\nAfter soft :");
	for(int  i=0;i<v.size();i++)
		printf("%d ",v[i]);

	if(binary_search(v.begin(),v.end(),5,cmpf))
		cout<<"\nFound.";
	else
	 cout<<"\nNot Found.";
	/*int max=*max_element(v.begin(),v.end());
	int maxp=max_element(v.begin(),v.end())-v.begin();
	printf("\nMax=%d MAxp=%d",max,maxp);
    //int p=*binary_search(v.begin(),v.end(),5)-v.begin();
	//printf("\nFind at position=%d",p);*/
	return 0;
}
