#include<stdio.h>
#include<stdlib.h>
void dg(int n)
{

	if(n==1)
	{ 
	   printf("A");
	} 
	else 
	{
	  	dg(n-1);
		  printf("%c",n+64);
		  dg(n-1); 
		
	}
}
int main(void){
	
	int n;
	scanf("%d",&n);
	dg(n);
	return 0;
	
} 
