//找出范围内符合要求的数（每个数加起来和为15)
#include<stdio.h>
int main()
{
	int i = 0;	
	for ( i = 0;i <= 1000; i++)
	{
		int ge = i % 10;
		int shi = i / 10 % 10;
		int bai = i / 100 % 10;
		int sum = ge + shi + bai;
		if (sum == 15)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}