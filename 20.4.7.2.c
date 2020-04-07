#include<stdio.h>
#include<stdlib.h>

void CompactIntegers(int a[],int m)
{
	
	int i,j,k;int b[100]={0};
	k=0;
	for(i = 0;i < m;i ++)
	{
	  if(a[i]!=0)
	  {
	   b[k]=a[i];
	   k++;	     	  	
	  }
	}
	printf("%d\n",k); 
	for(i=0;i<k;i++)
	{
		printf("%d ",b[i]);
	}

}

int main(void)
{
	int a[100];
	int n,i;
	scanf("%d",&n);
	for(i = 0;i < n;i ++)
	{
	scanf("%d",&a[i]);
	}
	CompactIntegers(a,n);
	return 0;
 } 
