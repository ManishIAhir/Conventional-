import java.util.*;

public class Largest{
    public static int findLargest(int [] numbers){
       int iMax=0;

       for(int i=0;i<numbers.length;i++){
          if(numbers[i]>iMax)
          {
            iMax=numbers[i];
          }
       }
       return iMax;
       
    }
    public static void main(String args[]){

       int[] nums={1,2,3,6,7,4,0};
       int iLarge = findLargest(nums);
       System.out.println("Maximum element is "+iLarge);
    }
}