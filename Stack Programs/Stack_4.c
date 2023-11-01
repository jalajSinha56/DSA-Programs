//Program for Decimal to Hexadecimal Conversion
#include<stdio.h>
int Stack[50],top=-1;
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int t=n,r;
    char a;
    while(n>0)
    {
        r=n%16;
        if(r<10)
        {
           Stack[top+1]=r;
           printf("%d",r);
        }
        else
        {
            if(r==10){
                a='A';
            }
            else if(r==11){
                a='B';
            }
            else if(r==12){
                a='C';
            }
            else if(r==13){
                a='D';
            }
            else if(r==14){
                a='E';
            }
            else{
                a='F';
            }
            Stack[top+1]=a;
            printf("%c",a);
        }
        top++;  
        n=n/16;
    }
}