#include<stdio.h>          //�ı��ַ��ָ���ֵ��ָ�� 
void large(double *a,double *b); 
int main(void)
{
	double a,b;
	printf("�������������֣�");
	scanf("%lf %lf",&a,&b);
	large(&a,&b);          //ע�⣬Ҫ��&����ΪҪ�ı�a��b��ֵ 
	printf("%lf %lf",a,b);
	return 0;
}
void large(double *a,double *b)
{
	if(*a>*b)
		*b=*a;
	else
		*a=*b;
}
