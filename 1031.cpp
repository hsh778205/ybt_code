//1031
//��һ����λ�������������������358���������853��
#include <iostream>
using namespace std;
int main()
{
	int x,a,b,c;
    cin>>x;
    a=x/100;
    b=x/10-a*10;
    c=x-a*100-b*10;
    cout<<c<<b<<a;
    return 0;
}
