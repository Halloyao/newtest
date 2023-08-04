#include<stdio.h>
int jolly();
int deny();
int main(void)
{
	for(int i=0;i<3;i++)
	{
		jolly();
	}
	deny();
	return 0;
}
int jolly()
{
	printf("jolly!!\n");
}
int deny()
{
	printf("deny!!\n");
}
