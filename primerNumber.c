#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	int count = 0,a = 0,b = 0;
	printf("请输入您想求素数的区间：");
	scanf("%d%d",&a,&b);
	printf("%d到%d之间的素数为：\n",a,b);
	if(a%2 == 0)
	{
		a++;
	}
	for(int i = a; i <= b; i+=2)
	{
		int j = 0;
		for(j = 2;j < sqrt(i); j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}
		if(j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d到%d共计素数为：%d个\n",a,a,count);
	return 0;
}
