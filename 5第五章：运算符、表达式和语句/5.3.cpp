#include<stdio.h>
const int week=7;
int main(void)
{
	int a;
	printf("输入天数：");
	scanf("%d",&a); 
	while(a>0)
	{
		int b=a/7;
		int c=a%7;
		printf("%d周%d天\n",b,c);
		scanf("%d",&a);
	}
	return 0;
}
