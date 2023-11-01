//Program for traversing array elements.

#include<stdio.h>
void main()
{
    int len, i, arr1[20];
    printf("Enter the length of an array:");
    scanf("%d",&len);
    printf("Enter the elements of an array:");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("The elements of an array:");
    for(i=0;i<len;i++)
    {
        printf("%d",arr1[i]);
    }
}