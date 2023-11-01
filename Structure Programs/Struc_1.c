//1. Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if the student is eligible for admission in Delhi University. A student is eligible for DU if he has scored 95 % or more in Best 4.

#include<stdio.h>
struct student
{
    int roll_no;
    char name[15];
    float marks_sub1;
    float marks_sub2;
    float marks_sub3;
    float marks_sub4;
    float marks_sub5;
    float marks_sub6;
}s;
void main()
{
    int i;
    printf("Enter the details of student\n");
    scanf("%d %f %f %f %f %f %f", &s.roll_no, &s.marks_sub1, &s.marks_sub2, &s.marks_sub3, &s.marks_sub4, &s.marks_sub5, &s.marks_sub6);
    fflush(stdin);
    gets(s.name);
    float sum = s.marks_sub1 + s.marks_sub2 + s.marks_sub3 + s.marks_sub4 + s.marks_sub5 + s.marks_sub6;
    float percentage = (sum/600)*100;
    printf("Percentage is %f\n",percentage);
    if(percentage >= 95)
    {
        printf("Student is eligible for admission in DU.");
    }
    else{
        printf("Student is not eligible for admission in DU.");
    }
}
    