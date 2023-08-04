#include<stdio.h>
const float GALLONtoLITRE=3.785;
const float MILEtoKM=1.609;
int main(void)
{
	float a,b,c,d;
	printf("输入行驶里程和消耗的汽油量(加仑-英里)：");
	scanf("%f %f",&a,&b);
	printf("油耗为（加仑/英里）：%.1f\n",a/b);
	c=a*GALLONtoLITRE;
	d=b*MILEtoKM;
	printf("油耗为（升/公里）：%.1f\n",c/d);
	return 0;
 } 
