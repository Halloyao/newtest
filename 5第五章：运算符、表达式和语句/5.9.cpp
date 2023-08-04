#include<stdio.h>
const float K=273.16;
void Temperatures(double a); 
int main(int argc, char *argv[])
{
	double a;
	printf("输入华氏温度：");
	scanf("%lf",&a);
	Temperatures(a);
	return 0;
}
void Temperatures(double a)
{
	double b,c;
	b=5.0/9.0*(a-32.0);
	c=b+K;
	printf("%摄氏温度为：%.2lf，开氏温度为：%.2lf",b,c);
}
