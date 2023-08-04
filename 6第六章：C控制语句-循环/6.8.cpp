#include<stdio.h>
int main(void)
{
	float a,b;
	while(printf("输入两个浮点数：")&&scanf("%f %f",&a,&b)==2)      //scanf的返回值是成功读取数据的个数 
	{
		float c=(a-b)/(a*b);
		printf("%.6lf\n",c); 
	}
	return 0;
}
