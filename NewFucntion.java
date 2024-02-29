
import java.util.Scanner;

public class Main
{
    public static Scanner kartik =  new Scanner(System.in);
	public static void main(String[] args) {

	helloKartik("kartik",56);
	int ohmax = max(4,18);
	System.out.println(ohmax);
	}
	
	public static void helloKartik(String name , int age){
	 
	    	System.out.println("Hello " + name + " your age is " + age);
	}
	
	public static int max( int num1 , int num2){
	    if ( num1 > num2){
	        return num1;
	    }
	    else{
	        return num2;
	    }
	}
}
