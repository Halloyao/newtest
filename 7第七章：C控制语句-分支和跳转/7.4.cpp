#include<stdio.h>
#define MAX 50
int main(void)
{
	char ch;
	int count=0;
	printf("请输入一串字符：");
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
	printf("\n一共转换了%d次",count);
	return 0;
}
