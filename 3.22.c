#include<stdio.h>
#include<string.h>

int main(void){
	long b,c,d;
	int i,i1,i2,j,k,n=0,n1,n2,a[256];
	char s1[256],s2[256];
	scanf("%s",s1);
	scanf("%s",s2);
 	for(i = 0; i < 255;i ++){
      a[i] = 0;	
	}
	n1 = strlen(s1);//第一个数的长度 
	n2 = strlen(s2);//第二个数的长度 
	d = 0;//进位 
	for(i1 = 0,k = n1 - 1;i1 < n1;i1 ++,k --)
	{
	  for (i2 = 0,j = n2 - 1; i2 < n2; i2 ++,j--)
	  {
	   i = i1 + i2;
	   b = a[i] + (s1[i1]-48) * (s2[i2]-48)+d;//按位乘法 
	   printf("%d/t",b);
	   a[i] = b % 10;
	   d = b / 10;
      } 
	   while (d > 0)//判断有无进位 
	   {
	    i ++;
		a[i] = a[i]+ d % 10;
		d= d /                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    10;	
	   }
	   n = i ;
	}
	for(i = n; i >= 0  ;i--)
	printf("%d",a[i]);
	return 0; 
} 
