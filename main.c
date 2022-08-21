#include <stdio.h>
int main()
{
	int x[4] = {1,2,3,4};//定义一个数组存放四个数
	int i,j,k;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			for (k = 0; k < 4; k++)
				if (x[i] != x[j] && x[i] != x[k] && x[j] !=x[k])
					printf("%d\n",(x[i]*100)+(x[j]*10)+(x[k]));
	return 0;
}//找出四个数1,2,3,4，的不同排列组合的三位数；