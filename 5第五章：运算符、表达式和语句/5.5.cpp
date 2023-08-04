#include<stdio.h>
int main(int argc, char *argv[])
{
	int count,sum=0;
	printf("输入工作天数：");
	scanf("%d",&count);
	while(count>0)
	{
		sum+=count--;       //sum先+count，后count再-- 
	}
	printf("工资总数为：%d",sum);
	return 0;
}
