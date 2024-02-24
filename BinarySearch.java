import java.util.*;

public class BinarySearch{
    
    public static int b_Search(int[] numbers,int key){
           
           int start=0;
           int end= numbers.length-1;
           
           while(start<=end){
            int mid =(start+end)/2;
            if(key==numbers[mid]){
                return mid;
            }
            if(key>mid){
                start=mid+1;
            }
            if(key<mid){
                end=mid-1
            }
           }
           
    }
    public static void main(String args[]){
        int[] nums ={2,4,6,7,9,10};
        int key =9;

        int index=b_Search(nums,key);
    }
}