#include<stdio.h>
#include<math.h>
//判断1-8出现的次数 
int check_1_8(long m)
{
 int f[10], i,flag;
 for(i=0;i<10;i++)
 f[i]=0;
 while(m!=0)
 {
  f[m%10]++;
  m=m/10;	
 }
 for(flag=1,i=1;i<=8;i++)
 { 
 	if(f[i]!=1) 
	 {
	 	flag=0;
	 break;
    }
 }
 return flag;
}
 //判断对角线 
int check_dia(long m)
{
  int g[9],i,j,flag;
  for(i=8;i>=1;i--)
  {
  	g[i]=m%10;
  	m=m/10;
  }
  flag=1;
  for(i=1;i<=7;i++)
  {
  	for(j=i+1;j<=8;j++)
  	{
  		if(abs(g[i]-g[j])==j-i)
  		{
  			flag=0;
  			break;
		  }
	  }
  }
  return flag;
}
//通过矩阵形式输出 
void print(long m)
{
  int i=0,j;
  int a[8]={0};
  while(m>0)
  {
    a[i]=m%10;
	i++;
	m=m/10; 
  }
   for(i=7;i>=0;i--)
 {
  for(j=0;j<=7;j++)
  {
  	 if(j==a[i])
   printf("1 ");
   else printf("0 "); 
  }
  printf("\n");
  }
}
int main(){
 int sum=0;
 long a;
 for(a=12345678;a<=87654321;a+=9)
 {
 	if(check_1_8(a)==0)
 	continue;
 	if(check_dia(a)==0)
 	continue;
 
 	print(a);
 	printf("\n");
 	sum++;
}
	 printf("一共有%d种",sum);
	 return 0;
 }

