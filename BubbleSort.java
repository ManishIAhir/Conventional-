import java.util.*;

public class BubbleSort{
    public static void sort(int[] nums)
    {
        for(int i=1;i<nums.length;i++){
            if(nums[i]>nums[i-1]){
                int temp=nums[i];
                nums[i]=nums[i-1];
                nums[i-1]=temp;
            }
        }
        for(int i=0;i<nums.length;i++){
                System.out.print(" "+nums[i]);
            }          
    }
    public static void main(String args[]){

            int[] Arr={5,4,1,2,3};
            sort(Arr); 
              
    }
}