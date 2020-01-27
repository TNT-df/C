// 质因数分解 
#include<stdio.h>
#include<stdlib.h>

int judge(int num)
{
    if(num==2 || num==3)
    {
        return 1;
    }
    
    if(num%6!=5 || num%6!=1)
    {
        return 0;
    }
    int i=0;
    for(i=5;i<num/2;i++)
    {
        if(num%i==0 || num%(i+2)==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
	int i, j;
	int a, b, m, n;
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
	{
        int num = i;
        printf("%d=",i);
		for (j = 2; j <num; j++)
		{
			if (judge(j) && num % j == 0)
			{
				printf("%d", j);
                if(num/j != 1)
                {
                    printf("*");
                }
              //  printf("   %d  ",num/j);
				num /= j;
                j = 1;
			} 
 
		}
		if(num != 1)
       printf("%d",num);
		printf("\n");
	}

	return 0;
}


