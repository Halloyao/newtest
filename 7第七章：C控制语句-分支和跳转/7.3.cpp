#include<stdio.h>
#define MAX 50
int main(void)
{
	int a[MAX],i=0;
	int m=0,n=0,k=0;
	printf("�������֣�0��������");
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
	printf("ż����%d ������%d ������%d",m,n,k);
	return 0;
 } 
