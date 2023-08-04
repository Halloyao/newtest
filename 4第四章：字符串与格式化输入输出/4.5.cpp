#include<stdio.h>
int main(void)
{
	float a,b,time;
	printf("输入下载速度（Mb/s）：");
	scanf("%f",&a);
	printf("输入文件大小（MB）：");
	scanf("%f",&b);
	time=b*8/a;
	printf("下载时间为：%.3f秒",time);
	return 0;
}
