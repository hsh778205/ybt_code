//1033
//已知线段的两个端点的坐标A(Xa,Ya)，B(Xb，Yb)，求线段AB的长度，保留到小数点后3位。
//输入中所有实数的绝对值均不超过10000。sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya)))
//【输入样例】
//1 1
//2 2
//【输出样例】
//1.414
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	double xa,ya,xb,yb,s;
	cin>>xa>>ya>>xb>>yb;
	s=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
	printf("%.3lf",s);
	return 0;
}
