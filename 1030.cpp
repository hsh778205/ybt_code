//1030
//���ڰ뾶Ϊ r ����������ļ��㹫ʽΪV=3/4r3������ȡ ��=3.14.
//�ָ��� r������뾶������Ϊdouble����������V��������С�����2λ.
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double r,v;
    cin>>r;
    v=4/3.0*r*r*r*3.14;
    printf("%.2lf",v);
    return 0;
}
