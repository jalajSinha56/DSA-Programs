//Program for Matrix transposition without second matrix

#include<stdio.h>
void main()
{
    int i,j,row,col;
    printf("Enter the no. of rows and columns of a matrix:");
    scanf("%d%d",&row,&col);
    int a[row][col];
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
    int ch;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            ch=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=ch;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}