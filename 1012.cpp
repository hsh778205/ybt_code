//对于多项式f(x)=ax^3+bx^2+cx+d和给定的a,b,c,d,x，
//计算f(x)的值，保留到小数点后7位。
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	double x,a,b,c,d,f;
	cin>>x>>a>>b>>c>>d;
	f=a*pow(x,3)+b*pow(x,2)+c*x+d;
	printf("%.7lf",f);
	return 0; 
}
