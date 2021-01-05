/*Program to compute quotient and remainder*/

#include <stdio.h>
int main(void)

{
    int x,y,q,r;  /*Specifying variables and data types*/
    printf("Enter dividend and divisor\n");
    scanf("%d,%d",&x,&y);
    
    q=x/y;   /*Formula for quotient*/
    r=x%y;   /*Formula for remainder*/
    
    printf("Quotient:%d, Remainder:%d\n",q,r);
    return 0;
}    
