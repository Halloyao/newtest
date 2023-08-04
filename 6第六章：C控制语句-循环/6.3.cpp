#include<stdio.h>
int main(void)
{
	char a[10];
	char b='F';
	for(int i=0;i<6;i++)
	{
		a[i]=b-i;
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%c ",a[j]);
		}
		printf("\n");
	}
	return 0;
}
