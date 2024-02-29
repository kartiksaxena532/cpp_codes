/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

public class Main
{
	public static void main(String[] args) {
	    int name =  Integer.MAX_VALUE ;
		System.out.println("Hello World " + name);
		
		int myNumber = 1; 
		myNumber +=1;
		System.out.println(myNumber);
			myNumber -=1;
			System.out.println(myNumber);
				myNumber *=3;
				System.out.println(myNumber);
					myNumber /=2;
					System.out.println(myNumber);
		float num1 = 8f;
		float num2 =6;
		
		System.out.println(num1+num2);
		System.out.println(num1-num2);
		System.out.println(num1*num2);
		System.out.println(num1%num2);
		
		
			System.out.println(myNumber++);
				System.out.println(myNumber--);
					System.out.println(--myNumber);
						System.out.println(++myNumber);
				boolean kartik = true;
		
		if (kartik==false){
		    System.out.println("hello bhai tu toh true hai");
		}
		else{
		    System.out.println("abey tu toh false hai");
		}
			if (myNumber <10 && kartik){
		    System.out.println("aaja bhai khadfa kya hai");
		}
		else{
		    System.out.println("wushang clan");
		}
	}
}
