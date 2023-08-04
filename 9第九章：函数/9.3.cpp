#include<stdio.h>                 (与9.2几乎一致)
void chline(char ch,int i,int j);
int main(void)
{
	char ch;
	int i,j;
	printf("分别输入ch，i，j：");
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
