#include<stdio.h>
double min(double x,double y);
int main(void)
{
	double a,b;
	printf("请输入a，b的值：");
	scanf("%lf %lf",&a,&b);
	printf("较小值为：%lf",min(a,b));
	return 0;
}
double min(double x,double y)
{
	if(x<=y)
		return x;
	else
		return y;
}
