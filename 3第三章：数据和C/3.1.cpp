#include<stdio.h>
#include<float.h>
#include<limits.h>
int main(void)
{
	int bigint=2147483647;
	float bigfloat=3.4e38;
	float smallfloat=10.0/3;
	printf("最大整型数据+1=%d\n",bigint+1);       //整型越界 
	printf("最大float数据*10=%f\n",bigfloat*10);  //浮点数越界 
	printf("float精度损失=%f",smallfloat);        //精度损失
	return 0;
}
