#include<stdio.h>
#define MAX 50
int main(void)
{
	char ch;
	int count=0;
	printf("请输入一串字符：");
	while((ch=getchar())!='#')
	{
		switch(ch)
		{
			case '!':
				printf("!!");
				count++;
				break;
			case '.':
				printf("!");
		 		count++;
		 		break;
			default:
				printf("%c",ch); 		
		}
	}
	printf("\n一共转换了%d次",count);
	return 0;
}
