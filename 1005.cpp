#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int x,a,y,b;
	float z;
	cin>>x>>a>>y>>b;
	z=(b*y-a*x)*1.0/(b-a);
	printf("%.2f",z);
	return 0;
}
