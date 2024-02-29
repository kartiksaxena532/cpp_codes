public class Arrays{

  public static void main (String[] args){
      comeToMamaHoney();
  }

   public static void comeToMamaHoney (){
       int num[] = {100,200,120,500,699,675};
       for ( int i = 0 ; i<num.length ; i++){
       System.out.println(num[i]);
       }
       
       String[] friends={"maria","siya","gundi","didi","chorni"};
       
       for( String friend : friends ){
           System.out.println(friend);
       }
  }
}
