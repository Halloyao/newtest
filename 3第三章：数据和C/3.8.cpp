#include<stdio.h>
#define m 2
#define n 3
#define k 8
int main(void)
{
	float a,b,c,d,e;
	printf("����Ʒ������");
	scanf("%f",&a);
	b=a*m;
	c=b*k;
	d=c*m;
	e=d*n;
	printf("������    %f\n",b);
	printf("��˾����  %f\n",c);
	printf("����������%f\n",d);
	printf("��������  %f\n",e);
	return 0;
} 
