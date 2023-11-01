//Program for Decimal to any base Conversion
#include<stdio.h>
int Stack[50],top=-1;
void main()
{
    int n,b;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the base into which number should be converted:");
    scanf("%d",&b);
    int t=n;
    while(n>0)
    {
        Stack[top+1]=n%b;
        top++;  
        n=n/b;
    }
    printf("Decimal to %d conversion of %d is:",b,t);
    for(int i=top;i>=0;i--)
    {
        printf("%d",Stack[i]);
    }
}