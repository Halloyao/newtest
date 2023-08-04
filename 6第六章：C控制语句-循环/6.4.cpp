#include<stdio.h>
int main(void)
{
	char a[26];
	char b='A';         //A的ascll值为65 
	int j=0,c=2;
	for(int i=0;i<26;i++)
	{
		a[i]=b+i;
	}
	for(int i=0;i<26;i+=c,c++)           //挺不容易，新颖的编排 
	{
		for(;j<=i;j++)
		{
			printf("%c ",a[j]);
		}
		printf("\n");
	}
	return 0;
}
