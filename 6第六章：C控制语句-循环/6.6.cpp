/*
1、%d 普通的整数输出
2、%6d 整数输出，宽度是6位，不足左边补空格
3、%06d 整数输出，宽度是6位，不足左边补数字0
4、%-6d 整数输出，宽度是6位，不足右边补空格
5、%.6f 输出小数，即保留小数点后6位
*/
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("输入上限下限：");
	scanf("%d %d",&a,&b);
	for(int i=b;i<=a;i++)
	{
		printf("%6d %10d %10d\n",i,i*i,i*i*i);
	}
	return 0;
}
