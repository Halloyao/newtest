#include<stdio.h>
const int k=60;
int main(void)
{
	int a;
	printf("请输入分钟数（整数）：");
	scanf("%d",&a);
	while(a>0)
	{
		int b=a%60;
		int c=a/60;
		printf("%d小时%d分\n",c,b);
		scanf("%d",&a);
	}
	printf("输入非法，程序结束！！"); 
	return 0;
}
