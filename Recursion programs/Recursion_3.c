//Program for finding nth Fibonacci number using Recursion and improving its run time to save stack operations
#include<stdio.h>
int fibo(int n) 
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else{
        return (fibo(n-1) + fibo(n-2));
    }
}
void main()
{
    int n;
    printf("Enter the number\n: ");
    scanf("%d",&n);
    int ans = fibo(n);
    printf("%d",ans);
}