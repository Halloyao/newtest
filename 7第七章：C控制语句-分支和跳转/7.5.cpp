#include<stdio.h>
#define MAX 50
int main(void)
{
	char ch;
	int count=0;
	printf("������һ���ַ���");
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
	printf("\nһ��ת����%d��",count);
	return 0;
}
