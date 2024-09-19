#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cin>>a>>b>>c;
	max=a;
	if(b>max)
	{
		cout<<b<<"is greater";
	}
	else if(c>max)
	{
		cout<<c<<"is greater";
	}
	return 0;
}
