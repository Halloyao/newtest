#include<stdio.h>
double three(double a);
int main(int argc, char *argv[])
{
	double a,b;
	printf("输入计算立方的数字：");
	scanf("%lf",&a);
	b=three(a);
	printf("立方值为：%lf",b);
	return 0;
}
double three(double a)
{
	double k=a*a*a;
	return k;
}
