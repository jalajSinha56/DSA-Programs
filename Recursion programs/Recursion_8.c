//Program for finding sum of digits of a given number using recursion
#include<stdio.h>
int sum(int n) 
{
    if(n/10==0)
    {
        return n;
    }
    else
    {
        int a=n%10;
        int b=n/10;
        return (a+sum(b));
    }
}
void main()
{
    int n;
    printf("Enter the number\n:");
    scanf("%d",&n);
    printf("%d",sum(n));
}