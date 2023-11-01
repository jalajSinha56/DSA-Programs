#include<stdio.h>
struct student
{
    int r;
    char name[20];
    float m;
}s;
void main()
{
    printf("Enter the details");
    scanf("%d %s %f", &s.r, s.name, &s.m);
    printf("%d %s %f", s.r, s.name, s.m);
}