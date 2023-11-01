//Program for Computing A raised to power n using Recursion
#include<stdio.h>
int power(int n, int p) 
{
    if(p==1)
    {
        return n;
    }
    else
    {
        return n*power(n,p-1);
    }
}
void main()
{
    int n,p;
    printf("Enter the number\n: ");
    scanf("%d",&n);
    printf("Enter the power");
    scanf("%d",&p);
    printf("%d",power(n,p));
}