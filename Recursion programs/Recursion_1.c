//Program for finding factorial of a given number using recursion
#include<stdio.h>
int fact(int n) 
{
    if(n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
void main()
{
    int n;
    printf("Enter the number\n: ");
    scanf("%d",&n);
    printf("%d",fact(n));
}