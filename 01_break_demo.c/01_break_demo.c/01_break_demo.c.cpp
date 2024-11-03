#include<stdio.h>
int main()
{
	int i;
	for (i=1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			break;
		}
	}
	printf("%d\n", i);
	return 0;
}
