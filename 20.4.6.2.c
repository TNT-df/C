#include<stdio.h>
#include<stdlib.h>
#define N 100
int main(void)
{
    int a[N],b[N],c[N];  //b记录i-n的最长的不下降子序列长度
	                     //c纪录点i在最长的不下降子序列的后继编号 
	int n,i,j,max,k;
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
		c[i]=0;
	}
	for(i = n - 1;i > 0;i --)
	{
		max=0;
		k=0;
		for(j = i + 1;j <= n;j ++)
		{
			if(a[i]<a[j]&&b[j]>max)
			{
				max=b[j];
				k = j;
			}
			if(k != 0)
			{
				b[i] = b[k] + 1;
				c[i] = k;
			}
		}
	}
	max = 0;
	k = 0;
	for(i = 1; i <= n;i ++ )	
		if(b[i] > max)
		{
			max = b[i];
			k = i;
		}
	printf("%dlong=\n",max);
	printf("result is：");
	while(k!=0)
	{
		printf("%d",a[k]);
		k=c[k];
	}

}
