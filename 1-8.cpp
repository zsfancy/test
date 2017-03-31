#include <iostream>
using namespace std;

int main()
{
	int n,a,b,c;
	a=0,b=0,c=0;
	while((n=getchar())!=EOF)
	{
		if(n==' ')
		{
			a++;
		}
		if(n=='\t')
		{
			b++;
		}
		if(n=='\n')
		{
			c++;
		}
	}
	cout <<"空格数"<<a<<"制表符"<<b<<"换行符"<<c<<endl; 
	
} 
