#include<stdio.h>

void Display_Max_Mid_speed(int iRec)
{
    int iMax=0;iMid=0;
    int iTemp
    While(iRec!=0)
    {   
        iTemp=iRec;
        iMax=iRec;
    }
    return iMax;
}
int main()
{
    int iSpeed=0;
    int iRet=0;

    printf("While running max revolution of bike whee per second\n");
    printf("iSpeed is maximum speed recorded by embeded system...\n");
   
    register iRec = iSpeed;
     
    iRet=Display_Max_Mid_speed(iRec); 
    printf("Max:-%d",iRet);

    return 0;
}