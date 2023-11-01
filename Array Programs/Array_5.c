//Program for Missing number in an array

#include <stdio.h>
int main()
{
int n,i,sum=0,s=0;
printf("Enter the no of elements in an array");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("The array is :");
for(i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
for(i=1;i<=n+1;i++)
{
s=s+i;
}
printf("\nThe missing number is %d",s-sum);
return 0;
}