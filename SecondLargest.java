import java.util.*;

public class SecondLargest{
    
    public static int SecondLarge(int[] nums){
        int largest=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
        }
        int SecondLargest=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>SecondLargest&&nums[i]<largest){
                SecondLargest=nums[i];
            }
        }
        return SecondLargest;
    }
    public static void main(String args[]){
        int[] Array ={5,4,1,2,3,6};

        int iRet=SecondLarge(Array);
        System.out.println("Second largest element is "+iRet);
    }
}