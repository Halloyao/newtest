#include<stdio.h>
int main(int argc, char *argv[])
{
	int count,sum=0;
	printf("���빤��������");
	scanf("%d",&count);
	while(count>0)
	{
		sum+=count--;       //sum��+count����count��-- 
	}
	printf("��������Ϊ��%d",sum);
	return 0;
}
