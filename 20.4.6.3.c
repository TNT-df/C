#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[100],b[10];
	int i,j,temp;
	int flag=1;
	for(i=0;i<10;i++)
	{
	  scanf("%d",&a[i]);
	}
   for(j=1;j<=9;j++)
   {	
     for(i=0;i<10-j;i++)
     {
  	   if(a[i]>a[i+1])
  	   {
  		 temp=a[i];
  		 a[i]=a[i+1];
  		 a[i+1]=temp;
	    }
      }  
   }
     b[0]=a[0];
     j=0;
   for(i=0;i<10;i++)
   {
   	if(a[i]==b[j])
   	 {
      continue;	  
	}	  
   	else 
   	{
   		j++;
   		b[j]=a[i];
	   }
    }
   	for(i=0;i<=j;i++)
   	 printf("%d\n",b[i]);
   	 
   	return 0;
}

