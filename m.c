#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int m,n;
 	int i,j;
 	int a[200][200];
 	scanf("%d %d",&m,&n);
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 	  		scanf("%d",&a[i][j]);	
	 	}
 	}	
 	i = 0;
 	j = 0;
 	int up = 0,down = m,left = 0,right = n;
 	while(a[i][j] > 0)
 	{
 		if(a[i][j]>0)
  		{
  			for(;i<down;i++)
  			{
		  		printf("%d ",a[i][j]);
	  			a[i][j]=-1;
	  		}
	  		down--;
	  		j++;
	  		i--;
  		}
  	
 		if(a[i][j]>0)
 		{
 			for(;j < right; j++)
 			{
	 			printf("%d ",a[i][j]);
	 			a[i][j]=-1;
	 		}
	 		right--;
	 		j--;
	 		i--;
 		}  

 		if(a[i][j]>0)
 		{
 			for(;i>=up;i--)
 			{
	 			printf("%d ",a[i][j]);
	 			a[i][j]=-1;
	 		} 
	 		up++;
			j--;
			i++;
 		}
 	
		if(a[i][j]>0)
		{
			for(;j>left;j--)
			{
				printf("%d ",a[i][j]);
				a[i][j]=-1;	
			}
			left++;
			j++;
			i++;
		}

	}
 	
	return 0;
}

