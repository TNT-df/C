int main(void)
{
	int n, i, k, j, a[100][100];
	scanf("%d", &n);
	k = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i + 1; j++)
		{
			a[i - 1 + j][j] = k;
			k++;
		}
	}
	for (i = 1; i <= n; i++)
	{
		printf("\n");
		for (j = 1; j <= i; j++)
			printf("%d ", a[i][j]);
	}
	return 0;
}