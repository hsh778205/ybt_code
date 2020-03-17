#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b;
	c=1/(1/a+1/b); 
	printf("%.2lf",c);
	return 0; 
}
