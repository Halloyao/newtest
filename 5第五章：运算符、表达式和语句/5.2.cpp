#include<stdio.h>
int main(void)
{
	int i=0,a;
	printf("请输入一个整数："); 
	scanf("%d",&a);
	while(i++<11)              //先判别，后++ 
		printf(" %d\n",a++);   //先输出，后++ 
	return 0;
 } 
