#include<stdio.h>
double three(double a);
int main(int argc, char *argv[])
{
	double a,b;
	printf("����������������֣�");
	scanf("%lf",&a);
	b=three(a);
	printf("����ֵΪ��%lf",b);
	return 0;
}
double three(double a)
{
	double k=a*a*a;
	return k;
}
