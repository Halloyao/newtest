#include<stdio.h>
double harmean(double x,double y); 
int main(void)
{
	double a,b,r;
	printf("����a,b��");
	scanf("%lf %lf",&a,&b);
	r=harmean(a,b);
	printf("����ƽ����Ϊ��%lf",r);
	return 0;
}
double harmean(double x,double y)
{
	return 2/(1/x+1/y);
}
