#include<stdio.h>
double min(double x,double y);
int main(void)
{
	double a,b;
	printf("������a��b��ֵ��");
	scanf("%lf %lf",&a,&b);
	printf("��СֵΪ��%lf",min(a,b));
	return 0;
}
double min(double x,double y)
{
	if(x<=y)
		return x;
	else
		return y;
}
