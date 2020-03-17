//1031
//将一个三位数反向输出，例如输入358，反向输出853。
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
