#include <stdio.h>
int main()
{//��һ�⣬�ҳ��ĸ���1,2,3,4���Ĳ�ͬ������ϵ���λ����
	//int x[4] = {1,2,3,4};//����һ���������ĸ���
	//int i,j,k,count=0;
	//for (i = 0; i < 4; i++)
	//	for (j = 0; j < 4; j++)
	//		for (k = 0; k < 4; k++)
	//			if (x[i] != x[j] && x[i] != x[k] && x[j] != x[k])
	//			{
	//				printf("%d\n", (x[i] * 100) + (x[j] * 10) + (x[k]));
	//				count++;
	//			}
	//printf("�ܹ��������%d����λ����\n",count);

	//�ڶ��⣺һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
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
	//������:����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
	int year, month, day;
	printf("������-��-�գ�");
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
	printf("%d-%d-%d,����һ��ĵ�%d��\n",year,month,day,sum);
	return 0;
}