//Program for Decimal to octal Conversion
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
        Stack[top+1]=n%8;
        top++;  
        n=n/8;
    }
    printf("Decimal to octal conversion of %d is:",t);
    for(int i=top;i>=0;i--)
    {
        printf("%d",Stack[i]);
    }
}