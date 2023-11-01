//Program to find which element is repeated in the array and which is not

#include <stdio.h>
int main()
{
int n,i,max;
printf("Enter the number of elements:");
scanf("%d",&n);
int a[n];
printf("Enter the elements:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{
    if(max<a[i])
        max=a[i];
}
int dat[20];
for(i=0;i<=max+1;i++)
    dat[i]=0;
//dat[max+1]={0};
for(i=0;i<n;i++)
    dat[a[i]]++;
for(i=0;i<=max+1;i++)
{
    if(dat[i]!=0)
        printf("\nFrequency of %d is %d",i,dat[i]);
}
return 0;
}