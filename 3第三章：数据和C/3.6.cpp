#include<stdio.h>
#define m 3.0e-23
#define n 950
int main(void)
{
	float a,b,c;             //float�ľ�������ΪС�����6λ�����Ǳ�����Χ��ʮ�ִ�ģ�+-3.4e38���ڼ���ʱ����ʹ�� 
	printf("�����������");
	scanf("%f",&a);
	b=a*n;
	c=b/m;
	printf("����Ϊ��%f��\n",b);
	printf("ˮ������Ϊ��%f",c);
	return 0;
} 
