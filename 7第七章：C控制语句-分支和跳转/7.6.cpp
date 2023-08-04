#include<stdio.h>
#define MAX 50
int main(void)
{
	int num=0,m=0;
	char ch;
	while((ch=getchar())!='#')
	{
		switch(ch)
		{
			case 'e':
				m++;
				break;
			case 'i':
				if(m>0)
				{
					num++;
					m=0;
				}
				break;
			default:
				m=0;
		}
	}
	printf("%d",num);
	return 0;
}
