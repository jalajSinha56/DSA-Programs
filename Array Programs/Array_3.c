//Program for insertion in the sorted array

#include <stdio.h>
int main()
{
int i, j, n, m, temp, value, pos;
printf("Enter how many elements \n");
scanf("%d", &n);
int arr[n];
printf("Enter the elements \n");
for (i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}
printf("Input array elements are \n");
for (i = 0; i < n; i++)
{
     printf("%d \t", arr[i]);
}
for (i = 0; i < n; i++)
{
     for (j = i + 1; j < n; j++)
    {
        if (arr[i] > arr[j])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
printf("\nSorted list is \n");
for (i = 0; i < n; i++)
{
    printf("%d \t", arr[i]);
}
printf("\nEnter the element to be inserted \n");
scanf("%d", &value);
for (i = 0; i < n; i++)
{
    if (value < arr[i])
    {
        pos = i;
        break;
    }
    if (value > arr[n-1])
    {
        pos = n;
        break;
    }
}
if (pos != n)
{
    m = n - pos + 1 ;
    for (i = 0; i <= m; i++)
    {
         arr[n - i + 2] = arr[n - i + 1] ;
    }
}
arr[pos] = value;
printf("Final array is \n");
for (i = 0; i < n + 1; i++)
{
    printf("%d \t", arr[i]);
}
return 0;
}