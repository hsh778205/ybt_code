//���ڶ���ʽf(x)=ax^3+bx^2+cx+d�͸�����a,b,c,d,x��
//����f(x)��ֵ��������С�����7λ��
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
