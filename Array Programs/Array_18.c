//Program for Matrix Multiplication

#include<stdio.h>
void main()
{
    int i,j,arow,acol,brow,bcol;
    printf("Enter the no. of rows and columns of both matrix 1:");
    scanf("%d%d",&arow,&acol);
    printf("Enter the no. of rows and columns of both matrix 2:");
    scanf("%d%d",&brow,&bcol);
    if(arow != bcol)
    {
        printf("Matrix multiplication not possible.\n");
    }
    else
    {
       int a[arow][acol];
       int b[brow][bcol];
       printf("Enter the elements of matrix 1:");
       for(i=0;i<arow;i++)
        {
           for(j=0;j<acol;j++)
           {
               scanf("%d",&a[i][j]);
           }
        }
       printf("Enter the elements of matrix 2:");
       for(i=0;i<brow;i++)
        {
          for(j=0;j<bcol;j++)
           {
              scanf("%d",&b[i][j]);
           }
        }
       printf("The matrix 1 is:\n");
       for(i=0;i<arow;i++)
       {
          for(j=0;j<acol;j++)
          {
            printf("%d ",a[i][j]);
          }
        printf("\n");
        }
        printf("The matrix 2 is:\n");
        for(i=0;i<brow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        int c[arow][bcol];
        printf("The multiplication of both matrices are:\n");
        int sum = 0;
        for(i=0;i<arow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                for(int k=0;k<brow;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                sum=0;
            }
        }
        for(i=0;i<arow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
}
    