#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int c[100][100];
char a[100],b[100],str[100];
  int lcs_len(int i,int j)
    {
 	int t1,t2;
	if(i==0||j==0)
	 {
		c[i][j]=0;
	 }
	 else
	  if(a[i-1]==b[j-1])
	 {
	   c[i][j]=lcs_len(i-1,j-1)+1;
	  } 
	  else
	   {
	  	t1=lcs_len(i,j-1);
	  	t2=lcs_len(i-1,j);
	  	if(t1>t2)
	  	  c[i][j]=t1;
	  	else
	  	  c[i][j]=t2;
	   }
	  return (c[i][j]);
    }

 void buile_lcs(int k,int i,int j)
 {
 	if(i==0||j==0)
 	{
 		return;
	 }
 	if(c[i][j]==c[i-1][j])
      {
	     buile_lcs(k,i-1,j);
	  }
	  else if(c[i][j]==c[i][j-1])
	  {
	    buile_lcs(k,i,j-1);
	  }
	  else
	  {
	  	str[k-1]=a[i-1];
	  	printf("%s",str);
	  	buile_lcs(k-1,i-1,j-1);
	  }	  	
 }
 
int main(void)
{
 int m,n,k;
 printf("Enter tow string\n");
 scanf("%s",a);
 scanf("%s",b);
 m=strlen(a);
 n=strlen(b);
 
 k=lcs_len(n,m);
 
 buile_lcs(k,n,m);
 
 printf("%s",str);	
 return 0;
}

