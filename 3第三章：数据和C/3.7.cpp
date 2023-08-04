#include<stdio.h>
#define m 2.54
int main(void)
{
	int q;
	float a;        
	printf("输入身高（cm）：");   
	scanf("%d",&q);
	a=q/m;
	printf("换算为英寸为：%f",a);  
	return 0;
} 
