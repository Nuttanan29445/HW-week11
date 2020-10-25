#include <stdio.h>
int main()
{
	int n1, n2, a[100][100], n3, n4, b[100][100], sum[100][100];
	printf("Input size of matrix:");
	scanf_s("%d %d", &n1, &n2);
	printf("input matrix1:\n");
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			printf("a[%d][%d] is ", i, j);
			scanf_s("%d", &a[i][j]);
		}

	}
	printf("output matrix1:\n");
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("input matrix2:\n");
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			printf("b[%d][%d] is ", i, j);
			scanf_s("%d", &b[i][j]);
		}

	}
	printf("output matrix2:\n");
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	printf("Subtraction of  matrix: \n");

	for (int k = 1; k <= n1; k++)
	{
		for (int l = 1; l <= n2; l++)
		{
			sum[k][l] = a[k][l] - b[k][l];
			printf("%d\t", sum[k][l]);
		}
		printf("\n");
	}

	return 0;
}