#include<stdio.h>
#define MAX 8
int main(void)
{
	int a[MAX];
	printf("输入8个整数：");
	for(int i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=7;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
