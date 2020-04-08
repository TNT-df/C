#include<stdio.h>
#include<stdlib.h>
int main(void){
int *a,n,i;
int sum=0;
scanf("%d",&n);
a = (int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
 } 
 
 for(i=0;i<n;i++)
{
	if(a[i]!=0)
	sum=sum+a[i];
	else
	continue;	
 } 
 printf("%d %d",sum,sum/n);
 return 0;
 
}


