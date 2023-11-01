//Program for delete the given elements into an array.

#include <stdio.h>
#include <conio.h>

int main ()
{

    int pos, i, n;
    printf (" \n Enter the number of elements in an array: \n ");
    scanf (" %d", &n);
    int arr[n];
    printf (" \n Enter %d elements in array: \n ", n);
    for (i = 0; i < n; i++ )
    {
        scanf (" %d", &arr[i]);
    }
    printf( " Define the position of the array element where you want to delete: \n ");
    scanf (" %d", &pos);
    if (pos >= n+1)
    {
        printf (" \n Deletion is not possible in the array.");
    }
    else
    {
        for (i = pos - 1; i < n -1; i++)
        {
            arr[i] = arr[i+1];
        }

        printf (" \n The resultant array is: \n");


        for (i = 0; i< n - 1; i++)
        {
            printf (" %d \t", arr[i]);
        }
    }
    return 0;
}