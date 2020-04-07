#include<stdio.h>
#include<stdlib.h>
void buble2(int a[],int k)
{
  int i,j,temp,flag=1;
  for(i=1;i<k-1&&flag;i++)
  {
  	flag=0;
  	for(j=0;j<k-i;j++)
  	{
  		if(a[j]>a[j+1])
  		{
  			temp=a[j];
  			a[j]=a[j+1];
  			a[j+1]=temp;
  			flag=1;
		  }
	  }
  }
  	for(j=0;j<k;j++)
  	{
  		if(a[j]!=a[j+1])
  		printf("%d ",a[j]);
  	}
  	printf("\n");
}
void jj(int a[],int b[],int n,int m)
{
 	int i,j,k=0;
 	int c[1000];
 	for(i=0;i<n;i++)
	 {
 		for(j=0;j<m;j++)
 		{
 			if(a[i]==b[j])
 			{
 			  c[k]=a[i];
			   k++;	
			 }	 
		 }
	 }
	 if(k==0)
	 return;
	buble2(c,k);
}

void bj(int a[],int b[],int n,int m)
{
	int i,j,k=0;
	int c[1000];
  for(i=0;i<n;i++)
  {
  	c[i]=a[i];
  }
  k=i;
   for(i=0;i<m;i++)
   {
   	c[k]=b[i];
   	k++;
   }
   	if(k==0)
   	return ;
	buble2(c,k);
}
void cj(int a[],int b[],int n,int m)
{
	int i,j,k=0;
	int c[1000];
    int flag;
	 for(i=0;i<n;i++)
	 {
	 flag=1;
	 	for(j=0;j<m;j++)
	 	{
		 if(a[i]!=b[j])
	 	 continue;
	 	  else
	 	 {
	 	 	flag=0;
	 	 	break;
		  }
		 }
		 if(flag)
		 {
		 c[k]=a[i];
		 k++;
		 } 		 
	}	 
	if(k==0)
	return;
	buble2(c,k);
	}	


int main(void)
{
 int n,m,i;
 int a[1000],b[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  scanf("%d",&m);
  for(i=0;i<m;i++)
  scanf("%d",&b[i]);
  jj(a,b,n,m);
  bj(a,b,n,m);
  cj(a,b,n,m);
  return 0;
  }

