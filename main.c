#include <stdio.h>
int main()
{//第一题，找出四个数1,2,3,4，的不同排列组合的三位数；
	//int x[4] = {1,2,3,4};//定义一个数组存放四个数
	//int i,j,k,count=0;
	//for (i = 0; i < 4; i++)
	//	for (j = 0; j < 4; j++)
	//		for (k = 0; k < 4; k++)
	//			if (x[i] != x[j] && x[i] != x[k] && x[j] != x[k])
	//			{
	//				printf("%d\n", (x[i] * 100) + (x[j] * 10) + (x[k]));
	//				count++;
	//			}
	//printf("总共可以组成%d个三位数。\n",count);

	//第二题：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
	/*int  i, j, m, n, x;
	for (i = 1; i < 168 / 2 + 1; i++)
	{
		if (168 % i == 0)
		{
			j = 168 / i;
			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
			{
				m = (i + j) / 2;
				n = (i - j) / 2;
				x = n * n - 100;
				printf("%d + 100 = %d * %d\n", x, n, n);
				printf("%d + 268 = %d * %d\n", x, m, m);
			}
		}
	}*/
	//第三题:输入某年某月某日，判断这一天是这一年的第几天？
	int year, month, day;
	printf("输入年-月-日：");
	int	a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int	b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i;
	int sum = 0;
	scanf_s("%d-%d-%d", &year, &month, &day);
	if (year % 4 == 0)
	{
		for (i = 0; i < month-1; i++)
		{
			sum += b[i];
		}
		sum += day;
	}
	else
	{
		for (i = 0; i < month - 1; i++)
		{
			sum += a[i];
		}
		sum += day;
	}
	printf("%d-%d-%d,是这一年的第%d天\n",year,month,day,sum);
	return 0;
}