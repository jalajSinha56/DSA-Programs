//Program to reverse the given number using Recursion
#include<stdio.h>
#include<math.h>
#include <stdio.h>

int reverseNumber(int num, int reversedNum) {
    // Base case: When the number becomes 0, return the reversed number.
    if (num == 0) {
        return reversedNum;
    } else {
        // Extract the last digit of the number.
        int lastDigit = num % 10;
        
        // Add the last digit to the reversed number (multiply it by 10 to shift its position).
        reversedNum = (reversedNum * 10) + lastDigit;
        
        // Recursively call the function with the remaining part of the number.
        return reverseNumber(num / 10, reversedNum);
    }
}

int main() {
    int num, reversedNum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the reverseNumber function to reverse the given number.
    int result = reverseNumber(num, reversedNum);
    
    printf("Reversed number: %d\n", result);
    return 0;
}
