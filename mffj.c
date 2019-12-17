#include<stdio.h>
#include<stdlib.h>
void f(int a)
{ 
  int i=0,b[32];
  int w,k,j;
  if(a==0)
  printf("0");
  else
  if(a==2) printf("2");
  else if(a==1)printf("2(0)");
  else
  	 while(a)
    {
      b[i]=a%2;
	  a/=2;
	  i++;	
    }
	 w=i;
	 k=0;
	 j=0;	
     for(i=w-1;i>=0;i--)
      {
       if(b[i])
	   k++;	 
	  } 
	 for(i=w-1;i>=0;i--)
      {
     	if(b[i])
		 {
		 j++;
		 if(i==1)printf("2");
		 else
		 {
		 printf("2(");
		 f(i);
		 printf(")");	
		 }	
		  if(j!=k)printf("+");	
		 } 
	  }	
 } 
 int main(void)
 {
  int m;
  scanf("%d",&m);
   f(m);
   return 0;
 } 
