/* 
   "Basic Arithmetic Operations on Two Numbers"
   This program takes two numbers as input and performs addition, subtraction, multiplication and division.
*/


#include <stdio.h>

int main() 

{
    int sum,sub,mul,Div,a,b;
    printf("Enter the First number: ");
    scanf("%d",&a);
    printf("Enter the Second number: ");
    scanf("%d",&b);
    
     sum=a+b;
     sub=a-b;
     mul=a*b;
     Div=a/b;
     
     printf("The addition is:%d ",sum);
     printf("The subtraction is:%d ",sub);
     printf("The multiplication is:%d ",mul);
     printf("The division is:%d ",Div);
     
    return 0;
}