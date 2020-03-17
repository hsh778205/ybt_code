//两个整数a和b分别作为分子和分母，既分数a/b，
//求它的浮点数值(双精度浮点数，保留小数点后9位)。
#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b;
	c=a/b;
	printf("%.9lf",c);
	cin>>a;
	return 0; 
}
