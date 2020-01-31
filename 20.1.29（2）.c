#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, k, s;
	int j, a[20];
	for (i = 1; i <= 1000; i++)
	{
		s = 1;
		k = 0;
		for (j = 2; j<i; j++)
		{
			if (i%j == 0)
			{
				s = s + j;
				a[k] = j;
				k++;
			}
		}
		if (i == s)
		{
			printf("%dit's factors are 1 ", s);
			for (j = 0; j<k; j++)
			{
				printf("%d ", a[j]);
			}
			printf("\n");
		}
	}

	return 0;
}