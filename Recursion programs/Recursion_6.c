#include<stdio.h>
void TOH(int n, char A, char B, char C)
{
    if(n==1)
    {
        printf("Move disk %d from rod %c to rod %c\n",n,A,C);
        return;
    }
    TOH(n-1,A,C,B);       //move n-1 disks from A to C using B as buffer
    printf("Move disc %d from %c to %c\n",n,A,C);
    TOH(n-1,B,A,C);
}
void main()
{
    TOH(3,'S','H','D');   //for 3 disks use 'D' for third rod and so on..
}