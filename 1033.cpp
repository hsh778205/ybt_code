//1033
//��֪�߶ε������˵������A(Xa,Ya)��B(Xb��Yb)�����߶�AB�ĳ��ȣ�������С�����3λ��
//����������ʵ���ľ���ֵ��������10000��sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya)))
//������������
//1 1
//2 2
//�����������
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
