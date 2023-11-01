//Program for merging two sorted arrays

#include<stdio.h>
void main()
{
    int arr1[10],arr2[10];
    int i=0,j=0,k=0,n,m;
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

    int arr3[n+m];
    i=0;
    j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    while(i<n)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }    
    printf("The mergerd sorted array is :");
    for(i=0;i<n+m;i++)
    {
        printf("%d ",arr3[i]);
    }
}
