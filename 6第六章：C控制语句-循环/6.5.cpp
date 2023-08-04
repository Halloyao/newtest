#include<stdio.h>
int main(void)
{
	char a[26];
	char b='A';         //AµÄascllÖµÎª65 
	int c=2;
	for(int i=0;i<26;i++)
	{
		a[i]=b+i;
	}
	for(int i=0;i<5;i++)
	{
		for(int w=i;w<=4;w++)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			printf("%c",a[j]);
		} 
		for(int j=i;j>=0;j--)
		{
			printf("%c",a[j-1]);
		} 
		for(int w=i;w<=4;w++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
