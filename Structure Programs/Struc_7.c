//7. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.

#include<stdio.h>
struct marks
{
    int roll_no;
    char name[5];
    int chem_marks;
    int maths_marks;
    int phy_marks;
}s[5];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
      printf("Enter the details of %d student\n",i+1);
      scanf("%d %d %d %d", &s[i].roll_no, &s[i].chem_marks, &s[i].maths_marks, &s[i].phy_marks);
      fflush(stdin);
      gets(s[i].name);
    }  
    for(i=0;i<5;i++)
    {
        printf("%d %s %d %d %d\n", s[i].roll_no, s[i].name, s[i].maths_marks, s[i].chem_marks, s[i].phy_marks);
        float per= ((s[i].maths_marks + s[i].chem_marks + s[i].phy_marks)/300)*100;
        printf("The percentage of student %d is %f %\n",i+1,per);
    }
}
    