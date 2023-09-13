/* logical operators

#include<stdio.h>

int main()
{
    int a =0;
    int b =1;
    int c =2;

    int d = a < b && b > c;
    printf(" value of d id %d=",d);

    return 0;
}*//*
#include<stdio.h>
int main()
{
    printf("%d,%d,%d,%d",4<<2,4>>3,10>>3,10<<2);
    return 0;
}*/
#include<stdio.h>
int main()
{   char var=1;
    if(--var==0)
    {
        printf("Maniee\n");
    }
    else
    {
        printf("Ahir\n");
    }
    return 0;
}