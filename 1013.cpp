//利用公式C = 5*(F-32)/9(其中C表示摄氏温度，F表示华氏温度)
//进行计算转化,输入华氏温度f，输出摄氏温度c，
//要求精确到小数点后5位。
//输入一行，包含一个实数f，表示华氏温度。（f >= -459.67）
//输出一行，包含一个实数，表示对应的摄氏温度，
//要求精确到小数点后5位。
#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	double f,c;
	cin>>f;
	c=5*(f-32)/9;
	printf("%.5lf",c);
	return 0; 
}
