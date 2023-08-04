#include<stdio.h>
#include<string.h>
int main(void)
{
	float a;
	printf("请输入浮点数：");
	scanf("%f",&a);
	printf("%.lf %.le\n",a,a);     //.后面啥也没有，就是取到小数点0位，没有小数点，四舍五入 
	printf("%.4lf %.4le\n",a,a);   //.4就是取4位 
	printf("%lf %le\n",a,a);       //正常 
	return 0; 
}
