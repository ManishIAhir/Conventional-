import java.util.*;

public class CheckSorted{
    public static void isSorted(int nums[]){
        int check=1;
         for(int i=1;i<nums.length;i++){
            if(nums[i]>=nums[i-1]){
                continue;
            }else{
                check--;
            }
         }
         if(check==1){
             System.out.println("Array is sorted");
         }else{
             System.out.println("Array is not sorted");
         }
    }
    public static void main(String Args[]){
         int[] arr={1,2,3,4,5,5,6};
         isSorted(arr);
        
    }
}