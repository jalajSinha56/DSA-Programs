//3. Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.

#include<stdio.h>
struct student
{
    int roll_no;
    char name[15];
    int age;
    char address[20];
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
    fflush(stdin);
    gets(s[i].address);
    }  
    for(i=0;i<5;i++)
    {
    printf("%d %s %d %s %f", s[i].roll_no, s[i].name, s[i].age, s[i].address, s[i].marks);
    }
}
    