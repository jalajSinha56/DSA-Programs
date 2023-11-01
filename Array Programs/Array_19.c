//Program for Matrix Transpose

#include<stdio.h>
void main()
{
    int i,j,row,col;
    printf("Enter the no. of rows and columns of a matrix:");
    scanf("%d%d",&row,&col);
    int a[row][col];
    int b[col][row];
    printf("Enter the elements of matrix:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of matrix is:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}