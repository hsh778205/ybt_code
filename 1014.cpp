//给出圆的半径，求圆的直径、周长和面积。
//输入圆的半径实数r，输出圆的直径、周长、面积，每个数保留小数点后4位。圆周率取值为3.14159。
//输入包含一个实数r（0 < r ≤ 10,000），表示圆的半径。
//输出一行，包含三个数，分别表示圆的直径、周长、面积，
//数与数之间以一个空格分开，每个数保留小数点后4位。
#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	double r,d,c,s,a=3.14159;
	cin>>r;
	d=2*r;
	c=d*a;
	s=a*r*r;
	printf("%.4lf %.4lf %.4lf",d,c,s);
	return 0; 
}
