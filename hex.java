import java.util.Scanner;
public class hex
{
public static void main(String[] args)
   {
	Scanner input=new Scanner(System.in);
     System.out.println("请输入一个10进制数");
     int y=input.nextInt();
     String hex="";
     while(y!=0)
     {
       int hexvalue=y%16;
       char hexDigit=(hexvalue<=9&&hexvalue>=0)?(char)(hexvalue+'0'):(char)(hexvalue+'A'-10);
       hex=hexDigit+hex;
       y=y/16;
     }
      System.out.println("the hex numer is"+hex);
     }
}
