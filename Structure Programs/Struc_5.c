// 5. Write a program to add two complex numbers using structure. The values of the 
//complex number is to be taken from the user.

#include<stdio.h>
struct student
{
    int real;
    int imaginary;
}s[2];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
    printf("Enter the details of %d student\n",i+1);
    scanf("%d %d %f", &s[i].roll_no, &s[i].age, &s[i].marks);
    fflush(stdin);
    gets(s[i].name);
    }  
    for(i=0;i<5;i++)
    {
    printf("%d %s %d %s %f", s[i].roll_no, s[i].name, s[i].age, s[i].marks);
    }
}
    