//甲流并不可怕，在中国，它的死亡率并不是很高。
//请根据截止2009年12月22日各省报告的甲流确诊数和死亡数，
//计算甲流在各省的死亡率。
//输入仅一行，有两个整数，第一个为确诊数，第二个为死亡数。
//输出仅一行，甲流死亡率，以百分数形式输出，精确到小数点后3位。
#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	int a,b;
	float c;
	cin>>a>>b;
	c=(b*1.0/a)*100;
	printf("%.3f%%",c);
	return 0; 
}
