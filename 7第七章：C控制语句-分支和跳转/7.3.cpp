#include<stdio.h>
#define MAX 50
int main(void)
{
	int a[MAX],i=0;
	int m=0,n=0,k=0;
	printf("输入数字（0结束）：");
	while(scanf("%d",&a[i])&&a[i]!=0)
	{
		if(a[i]%2==0)
			m++;
		else if(a[i]%2==1)
			n++;
		else
			k++;
		i++;
	}
	printf("偶数：%d 奇数：%d 其他：%d",m,n,k);
	return 0;
 } 
