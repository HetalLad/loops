#include<stdio.h>
int sum_digits(int num)
{
    if (num==0)
    return 0;
    else 
    return(num%10+sum_digits(num/10));
}

int main()
{
    int n,sum;
   printf("Enter the number:");
   scanf("%d",&n);
   sum=sum_digits(n);
   printf("The sum of digits is: %d",sum);
   
}
