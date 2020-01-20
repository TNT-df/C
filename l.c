#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void)
{
	int i, j = 0,m;
	long long int k = 0;
	char a[100]={'\0'};
	scanf("%s", a);
	j= strlen(a);

	   m=j-1;
	for (i=0; i<j; i++)
	{
			int num = (a[i] <= '9'	&& a[i] >='0') ? (a[i] - '0') : (a[i] - 'A' + 10);

			k =k+ num*pow(16,m);
		
				m--;
	
	}
printf("%lld", k);
	return 0;
}

