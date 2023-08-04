#include<stdio.h>
void two()
{
	printf("two\n");
}
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}
int main(void)
{
	one_three();
	return 0;
}
