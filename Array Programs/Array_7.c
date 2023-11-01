//Program for reversal of an array.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter an array: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Reversed array: ");
    for (int i = n-1; i>=0; i--){
        printf("%d \t", arr[i]);
    }
    return 0;
}