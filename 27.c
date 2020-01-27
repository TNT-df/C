	



#include<stdio.h>
#include<stdlib.h>

int main(void)
{
 long int  a[10000]={1};
 int n,j,i,k=0,m=1;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 for(j=0;j<m;j++)
 		{a[j]=a[j]*i+k;
 		k=a[j]/10000;
 		a[j]=a[j]%10000;
		 }	
	 if(k)
 	{
 	  a[j]=k;
	  m++;
	  k=0;		
	}
	 }	
	 printf("%d",a[m-1]);
  for(i=m-2;i>=0;i--)
  {
  	printf("%04d",a[i]);
  	
  }
	printf("\n");
	return 0;
}
	

