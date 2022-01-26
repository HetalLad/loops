#include <stdio.h>

int gcd(int n,int m)
{
    if (n==0)
    return m ;
    else 
    return gcd(n%m,n);
}

void main()
{
    int a,b,res;
   printf("Enter the numbers:");
   scanf("%d %d",&a,&b);
   res=gcd(a,b);
   printf("The GCD OF THE NUMBERS IS : %d",res);
   
}
