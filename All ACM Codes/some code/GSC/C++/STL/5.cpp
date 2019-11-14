#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	string s,s1;
	char ch;
	//s="hello!";
	getline(cin,s);//gets(s)
	//gets(ch);
	//istringstream is(s);
	s+=" IIUC";
	int n=(int) s.size();
	printf("\nLength of string: %d",n);
	printf("\n%s\n",s.c_str());
	/* select substring */
	s1=s.substr(2); // position s[0],s[1],...s[n-1]
	printf("%s\n",s1.c_str());
	s1='\0';
	s1=s.substr(2,5);
	printf("%s\n",s1.c_str());
return 0;
}
