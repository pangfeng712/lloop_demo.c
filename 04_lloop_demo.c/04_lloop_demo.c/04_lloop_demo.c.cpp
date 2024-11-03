//判断一个数是不是质数
#include<stdio.h>
int main()
{
	int num;
	printf("请输入一个质数：");
	scanf_s("%d",&num);
	int count=0;
	for (int i = 2; i < num; i++)//从2到（num-1）中有多少个数可以被num整除
	{
		if (num % i == 0)//找出能被整除的
		{
			count++;//有几个
			break;//找到一个就可以截至了，可断定为不是质数
		}

	}
	if (count == 0)//如果没有一个数能被num整除
	{
		printf("%d是质数",num);
	}
	else
	{
		printf("%d不是质数",num);
	}
	return 0;
}