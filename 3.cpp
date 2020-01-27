#include<stdio.h>
#include<string.h>
int main(void){
	int m,n;
	int i;
	char a[10],b[10];
	scanf("%s",a);
	scanf("%s",b);
	m=strlen(a);
	n=strlen(b);
	if(m!=n)
	{
		printf("1"); 
	}
	if(m==n&&strcmp(a,b)==0)
	{
		printf("2");
		
	 }
   if(m==n&&strcmp(a,b)!=0)	  
   {
   for(i=1;i<=m;i++)
   {
   	 if(a[i]==b[i]||a[i]==b[i]-32||a[i]==b[i]+32)		 
       {
       	printf("3");
       	break;
		   }    
	 else printf("4"); 
	 break;
   }
	}      
        

	return 0;
} 
