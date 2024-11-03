#include<stdio.h>	
int main()
{
	/*for (int j=1;j<=5;j++) 
	{
		for (int i = j; i <= 5; i++)
		{
			printf("*");
		}
		printf("\n");
	}	*/
	for (int j = 1; j <= 5; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}