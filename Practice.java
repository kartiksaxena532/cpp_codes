
import java.util.Scanner;
public class Main
{
    
    public static Scanner scanner = new Scanner(System.in);
    
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
		
			if (myNumber >10 || !kartik){
		    System.out.println("aaja bhai khadfa kya hai");
		}
		else{
		    System.out.println("wushang clan");
		}
		
	int time = scanner.nextInt();
	
	
	switch(time){
	    case 10 :
	        System.out.println("Oh its " + time + "hr" + "\nits coffee time");
	        break;
	    
	     case 12 :
	        System.out.println("Oh its " + time + "hr" + " its chai time");
	        break;
	}
	
	
	for(int i = 0 ; i<time; i++){
	    System.out.println("i= "+i);
	}
		
	for(int j = 100 ; j>=time; --j){ //reversse looop
	    System.out.println("i= "+j);
	}
	

    int kartozz=0 ;
	
	do { 
	    System.out.println(kartozz);
	    
	}while(kartozz>=1);
	
	
	}
	


}
