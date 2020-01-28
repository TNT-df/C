public class arr1{
	public static void main(String[] args){
		int list[]={9,5,4,12,7,6,10};
for(int i=0;i<list.length-1;i++){
	int min=list[i];
     int index=i;
    for(int j=i+1;j<list.length;j++){
    	if(min>list[j]){
    		min=list[j];
    		index=j;    	
    	               }
 }  
         if(index!=i){
         	list[index]=list[i];
         	list[i]=min;
         }
                                }
        for(int i=0;i<list.length;i++)
        	System.out.print(list[i]  );
    }
}