#include<stdio.h>
const float K=273.16;
void Temperatures(double a); 
int main(int argc, char *argv[])
{
	double a;
	printf("���뻪���¶ȣ�");
	scanf("%lf",&a);
	Temperatures(a);
	return 0;
}
void Temperatures(double a)
{
	double b,c;
	b=5.0/9.0*(a-32.0);
	c=b+K;
	printf("%�����¶�Ϊ��%.2lf�������¶�Ϊ��%.2lf",b,c);
}
