#include<stdio.h>
#define m 2
#define n 3
#define k 8
int main(void)
{
	float a,b,c,d,e;
	printf("输入品脱数：");
	scanf("%f",&a);
	b=a*m;
	c=b*k;
	d=c*m;
	e=d*n;
	printf("杯数：    %f\n",b);
	printf("盎司数：  %f\n",c);
	printf("大汤勺数：%f\n",d);
	printf("茶勺数：  %f\n",e);
	return 0;
} 
