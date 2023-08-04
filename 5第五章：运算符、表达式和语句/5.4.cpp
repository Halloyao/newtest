#include<stdio.h>
const float INCH_TO_CM=2.54; 
int main(int argc, char *argv[])   //argc是外部输入的参数个数，argv[ ]是参数的字符串数组，参考下面网址 
{                                  //https://blog.csdn.net/zhaozhiyuan111/article/details/104050729
	float a,b;
	printf("输入身高（厘米）：");
	scanf("%f",&a);
	while(a>0)
	{
		b=a/INCH_TO_CM;
		printf("身高为：%.3f（英寸）\n",b);
		printf("---------------------\n");
		printf("输入身高（厘米）：");
		scanf("%f",&a);
	}
	printf("输入结束！！");
	return 0;
}
