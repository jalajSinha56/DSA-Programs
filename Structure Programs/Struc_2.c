//2. Write a program to store and print the roll no., name, age and marks of a student using structures. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1.

#include<stdio.h>
struct student
{
    int roll_no;
    char name[15];
    int age;
    float marks;
}s[5];
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
    