#include<stdio.h>
int main(void){
	int i=0,j,m;
		char a[100];
	scanf("%d",&m);
   if(m==0)
   printf("0");
   
    while(m!=0) 
	{

		j=m%16;
	   a[i]=(j>=0&&j<=9)?(j+'0'):(j-10+'A');
	   i++;
	   m/=16;
	}
	for(i=i-1;i>=0;i--)
	{
	printf("%c",a[i]);
	}
	return 0;	
}


