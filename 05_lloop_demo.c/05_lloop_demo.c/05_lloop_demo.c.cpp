#include<stdio.h>	
int main()
{
	long long res = 0;//定义一个变量，用于累加最终的结果
	for (int i = 1; i <= 10; i++)//外循环：依次表示1-10
	{
		long long pow = 1; //定义一个变量，使得1的1次方，2的2次方....
		for (int j=1;j<=i;j++)//内循环：使得pow累乘多少次
		{
			pow = pow * i;
		}
		res = res + pow;//每次循环后 1的1次方+2的2次方+.....
	}
	printf("%lld\n",res);
	return 0;
}
