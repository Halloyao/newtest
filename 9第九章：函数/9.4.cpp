#include<stdio.h>
double harmean(double x,double y); 
int main(void)
{
	double a,b,r;
	printf("输入a,b：");
	scanf("%lf %lf",&a,&b);
	r=harmean(a,b);
	printf("调和平均数为：%lf",r);
	return 0;
}
double harmean(double x,double y)
{
	return 2/(1/x+1/y);
}
