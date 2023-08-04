#include<stdio.h>
#define m 3.0e-23
#define n 950
int main(void)
{
	float a,b,c;             //float的精度虽热为小数点后6位，但是表数范围是十分大的，+-3.4e38，在计算时随意使用 
	printf("输入夸脱数：");
	scanf("%f",&a);
	b=a*n;
	c=b/m;
	printf("重量为：%f克\n",b);
	printf("水分子数为：%f",c);
	return 0;
} 
