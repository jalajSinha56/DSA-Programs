// Program to insert the given elements into an array.

#include<stdio.h>
void main()
{
    int n,i;
    int arr1[50];
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("Enter elements of an array");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    int index,ele;
    printf("Enter the index at which element is to be inserted:");
    scanf("%d",&index);
    printf("Enter the element which is to be inserted:");
    scanf("%d",&ele);
    for (int j = n; j > index; j--)
        {
            arr1[j] = arr1[j - 1];
        }
    arr1[index] = ele;
    n++;
    printf("Updated array:\n");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr1[k]);
    }
}