#include<stdio.h>
int main(void)
{
	char a[255];
	int i=0;
	printf("���������ַ���");
	do{
		scanf("%c",&a[i]);
	}while(a[i]!='\n'&&++i);         //���뵥���ַ�����������ַ�����Ч����\n���� 
	for(i--;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
 } 
