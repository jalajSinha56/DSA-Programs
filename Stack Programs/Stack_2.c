//Program for Decimal to Binary Conversion
#include<stdio.h>
int Stack[50],top=-1;
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int t=n;
    while(n>0)
    {
        Stack[top+1]=n%2;
        top++;  
        n=n/2;
    }
    printf("Decimal to binary conversion of %d is:",t);
    for(int i=top;i>=0;i--)
    {
        printf("%d",Stack[i]);
    }
}