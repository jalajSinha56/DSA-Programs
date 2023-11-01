//Program for Set Difference

#include<stdio.h>
void main()
{
    int arr1[20],arr2[20];
    int i=0,j=0,n,m;
    printf("Enter size of array1:");
    scanf("%d",&n);
    printf("Enter elements in array1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of array2:");
    scanf("%d",&m);
    printf("Enter elements in array2:");
    for(j=0;j<m;j++)
    {
        scanf("%d",&arr2[j]);
    }
    i=0;
    j=0;
    printf("The set differnce will be:\n");
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            printf(" %d ",arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            printf(" %d ",arr2[j]);
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while(j<m)
    {
        j++;
    }
    while(i<n)
    { 
        printf(" %d ",arr1[i]);
        i++;
    }    
}
