 public class arr1{
  	public static void main(String[] args){
  	   java.util.Scanner input=new java.util.Scanner(System.in);
  	   int n=input.nextInt();
  	   int []arr=new int[n];
  	   for(int i=0;i<n;i++)
  	   {
  	   	 arr[i]=input.nextInt();
  	  
  	   }
  	    	 int x=5;
        int y=binarySearch(arr,x);
        System.out.println(y);
        
         
  	}
  	public static int binarySearch(int arr[],int key)
  	{
       int low=0,high=arr.length-1;
       while(low<=high)
         {
          int mid=(high+low)/2;
           if(key<arr[mid])
           	high=mid-1;
           else if(key==arr[mid])
           	return mid;
           else
           	low=mid+1;
       }
        return -1;
      
  	}
  }

  //线性查找
  public class arr1{
	public static void main(String[] args){
	  java.util.Scanner input=new java.util.Scanner(System.in);
	   int n=input.nextInt();
int arr[]=new int[n];
	  for(int i=0;i<n;i++)
	  	arr[i]=input.nextInt();
	   int x=8;
	   int y=LinearSearch(arr,8); 
	   System.out.println(y);
	     }
	 public static int LinearSearch(int arr[],int key){
         for(int i=0;i<arr.length-1;i++)
	     {
            if(key==arr[i])
            {
            	return i;
            }
	     }    
      return -1;
	}
}	 