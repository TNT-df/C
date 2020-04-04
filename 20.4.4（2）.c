#include<stdio.h>
int a[]={2,3,5,7};
int pd(int n, int m){
	int i = 0;
	int count = 0;
	while(n>0){
	 i = n % 10;
	 if(i==2||i==3||i==5||i==7)
	 {
	   n = n/ 10;
	   count ++;	
	 } 
	 else return 0;
	}
	if(count==m){
		return 1;
	}
	return 0;
}
void print(int n,int m)
{
 int k=0;
 k = n*(m%10);
 printf("%d\n",n);
 printf("x");
 printf("%d\n",m);
 printf("-----\n");
 printf(" %d\n%d\n",k,k);
 printf("-----\n");
 printf("%d\n",n*m);
}
void two(int n)
{
	int i = 0,num = 0;
	int two=0;
		for(i=0;i <= 3;i++)
		{
		 two= a[i]*10+a[i];
		 num = n * two;
          if(pd(num,5)&&pd(n*(a[i]),4))
	     {
          print(n,two);	  	
	     }
	    }	
}
void three(){
	int i = 0,j = 0,k = 0;
	int Three;
	for(i = 0 ;i <= 3 ; i ++)
	  for(j = 0 ; j <= 3 ; j ++)
	   for(k = 0 ; k <= 3 ;k ++)
	   {
	   	 Three = a[i]*100+a[j]*10+a[k];  
	   	 two(Three);
	   }
	   
}	
int main(){
	three();
	return 0;
} 

