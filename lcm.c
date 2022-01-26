#include <stdio.h>
int lcm(int a, int b);


int main()
{
    int num1, num2,res;
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &num1, &num2);
    if(num1 > num2)
        res = lcm(num2, num1);
    else
        res = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, res);
    
    return 0;
}

int lcm(int a, int b)
{
    static int multiple = 0;
    multiple +=b;
    if((multiple % a == 0) && (multiple % b == 0))
        return multiple;
    else 
        return lcm(a, b);
}
