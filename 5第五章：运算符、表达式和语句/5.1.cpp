#include<stdio.h>
const int k=60;
int main(void)
{
	int a;
	printf("���������������������");
	scanf("%d",&a);
	while(a>0)
	{
		int b=a%60;
		int c=a/60;
		printf("%dСʱ%d��\n",c,b);
		scanf("%d",&a);
	}
	printf("����Ƿ��������������"); 
	return 0;
}
