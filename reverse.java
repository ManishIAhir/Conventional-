import java.util.*;

public class reverse{
    public static void main(String args[]){
        int iNum=0;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number ");
        iNum=sc.nextInt();
        int iRev=0;
        int iRem=0;
        while(iNum!=0){
           iRem=iNum%10;
           iRev=(iRev*10)+iRem;
           iNum=iNum/10;
        }
        System.out.println("REVERSE number is "+iRev);
    }
}
// 12
// 2*10+1