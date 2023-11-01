//Program for Matrix Addition

#include<stdio.h>
void main()
{
    int i,j,row,col;
    printf("Enter the no. of rows and columns of both matrices:");
    scanf("%d%d",&row,&col);
    int a[row][col];
    int b[row][col];
    int c[row][col];
    printf("Enter the elements of matrix 1:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix 2:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix 1 is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The matrix 2 is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("The addition of both matrices are:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}