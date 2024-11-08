#include<stdio.h>
int main()
{
	//1.goto的无限循环
	int i = 1;
a:
	printf("你好你好%d\n",i);
	i++;
	goto a;
	//for的无限循环
	for(int i=1;1;i++)
	{
		printf("你好你好%d\n", i);
	}
	return 0;
}