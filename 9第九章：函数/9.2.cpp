#include<stdio.h>
void chline(char ch,int i,int j);
int main(void)
{
	char ch;
	int i,j;
	printf("�ֱ�����ch��i��j��");
	scanf("%c %d %d",&ch,&i,&j);
	chline(ch,i,j);
	return 0;
}
void chline(char ch,int i,int j)
{
	for(int a=0;a<i;a++)
	{
		for(int b=0;b<j;b++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}
