#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b;
	printf("������ģ����");
	scanf("%d",&a);
	printf("�����뱻ģ����");
	scanf("%d",&b);
	while(b>0)
	{
		int c=b%a;
		printf("%d %% %d = %d\n",b,a,c);    //��printf�����%����ʽΪ%% 
		printf("�����뱻ģ����");
		scanf("%d",&b);
	}
	printf("�����������");
	return 0;
}
