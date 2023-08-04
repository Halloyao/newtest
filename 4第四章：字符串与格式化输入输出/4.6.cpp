#include<stdio.h>   //printf与scanf中*的使用 
#define MAX 100
int main(void)
{
	char a[MAX]; 
	char b[MAX];
	int num1,num2;
	printf("输入姓：");
	scanf("%s",&a);
	printf("输入名：");
	scanf("%s",&b);
	num1=printf("%s",a);
	printf(" ");
	num2=printf("%s",b);   //   \n也算字符，故在下面使用 
	printf("\n%*d %*d",num1,num1,num2,num2);
	printf("\n%s %s\n",a,b);
	printf("%d %*d",num1,num1,num2);
	return 0;
}
