#include<stdio.h>
const int week=7;
int main(void)
{
	int a;
	printf("����������");
	scanf("%d",&a); 
	while(a>0)
	{
		int b=a/7;
		int c=a%7;
		printf("%d��%d��\n",b,c);
		scanf("%d",&a);
	}
	return 0;
}
