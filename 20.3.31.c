#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c=0;
	printf("请输入分子：");
	scanf("%d",&a);
	printf("请输入分母：");
	scanf("%d",&b);
	if(a>=b)
	printf("input error");
	else
	if (a==1||b%a==0)
	printf("%d/%d=1/%d",a,b,b/a);
	else
	printf("%d/%d=",a,b);
	while(a!=1)
	{
	 c= b/a + 1;
	 a= a*c -b;
	 b = b * c;
	 printf("1/%d",c);
	   if(a>=1)
	    printf("+");
	   if(b%a==0||a==1)
	  {
	   printf("1/%d",b/a);
	    a=1;
      }
     
 	}
	return 0;
}
