#include <stdio.h>
int prime(int num,int i)
{
    if (i == 1)
        return 1;
    else
    {
       if (num % i == 0)
         return 0;
       else
         return prime(num, i - 1);
    }
}
 int main()
 { 
     int n,res;
     printf("Enter the number:\n");
     scanf("%d",&n);
     res=prime(n,n/2);
     if (res==1)
     printf("PRIME NUMBER");
     else
     printf("NOT A PRIME NUMBER");
 }
