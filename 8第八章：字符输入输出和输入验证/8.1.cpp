#include<stdio.h>
int main(void)
{
	int count=0;
	char ch;
	while(ch=getchar()!=EOF)
	{
		count++;
		if(ch>'\040')
		{
			count++;
		}
	}
	printf("%d���ַ�",count);
	return 0;
 } 
