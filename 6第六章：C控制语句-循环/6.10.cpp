#include<stdio.h>
int main(void)
{
	int a,b,sum=0;
	while(printf("����һ������һ�����ޣ�")&&scanf("%d %d",&a,&b)==2)
	{
		if(a==b)
		{
			sum=2*a*a;
			printf("%d\n",sum);
		}
		else
		{
			while(a<b)
			{	
				sum+=a*a;
				a++;
			}
			printf("%d\n",sum);
		}
		sum=0;
	}
	return 0;
}
