#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main(void){
	int n,i,j;
	int a[200];
	int temp;
	scanf("%d",&n);   
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	int tag=1;

	for(i=1;i<=n-1&&tag;i++)
	  {
		  tag=0;
		  for(j=0;j<n-i;j++)
	    {	
	   if(a[j]>a[j+1]) 
	       {
		temp=a[j];
	    a[j]=a[j+1];
	    a[j+1]=temp;
		  tag=1;
		   }
		
     	}
      }
		for(i=0;i<n;i++)
	{
     	printf("%d ",a[i]);
	}
	return 0;
	
	
} 


	
}
