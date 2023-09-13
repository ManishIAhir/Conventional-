
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character =\n");
    scanf("%c",&ch);

    printf("Decimal numbeer of %c is %d\n",ch,ch);
    printf("Hexa-decimalnumber of character %c is %u\n",ch,ch);
    printf("Octal number of character %c is %o\n",ch,ch);

    return 0;
}