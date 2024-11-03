#include<stdio.h>
int main()
{
	//外循环
	for (int j = 1; j <= 3; j++)
	{
		//内循环
		for (int i = 1; i <= 5; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}