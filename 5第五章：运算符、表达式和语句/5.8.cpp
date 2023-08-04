#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b;
	printf("请输入模数：");
	scanf("%d",&a);
	printf("请输入被模数：");
	scanf("%d",&b);
	while(b>0)
	{
		int c=b%a;
		printf("%d %% %d = %d\n",b,a,c);    //在printf中输出%，格式为%% 
		printf("请输入被模数：");
		scanf("%d",&b);
	}
	printf("程序结束！！");
	return 0;
}
