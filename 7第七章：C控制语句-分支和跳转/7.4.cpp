#include<stdio.h>
#define MAX 50
int main(void)
{
	char ch;
	int count=0;
	printf("������һ���ַ���");
	while((ch=getchar())!='#')
	{
		if(ch=='!')
		{
			printf("!!");
			count++;
		}
		else if(ch=='.')
		{
			printf("!");
			count++;
		}
		else
		{
			printf("%c",ch); 
		}
	}
	printf("\nһ��ת����%d��",count);
	return 0;
}
