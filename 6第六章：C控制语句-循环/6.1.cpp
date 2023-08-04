#include<stdio.h>
const int K=26;
int main(void)
{
	int a[K];
	char b='a';
	for(int i=0;i<K;i++)
	{
		a[i]=b+i;
		printf("%c ",a[i]);
	}
	return 0;
 } 
