#include<stdio.h>   //printf��scanf��*��ʹ�� 
#define MAX 100
int main(void)
{
	char a[MAX]; 
	char b[MAX];
	int num1,num2;
	printf("�����գ�");
	scanf("%s",&a);
	printf("��������");
	scanf("%s",&b);
	num1=printf("%s",a);
	printf(" ");
	num2=printf("%s",b);   //   \nҲ���ַ�����������ʹ�� 
	printf("\n%*d %*d",num1,num1,num2,num2);
	printf("\n%s %s\n",a,b);
	printf("%d %*d",num1,num1,num2);
	return 0;
}
