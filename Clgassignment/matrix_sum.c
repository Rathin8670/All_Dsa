#include <stdio.h>

void sum(int a[10][10],int b[10][10],int c[10][10],int row,int col)
{
   int i,j;
   for(i=0;i<row;i++)
   {
       for(j=0;j<col;j++)
       {
           c[i][j]=a[i][j]+b[i][j];
       }
   }
   
}

int main() {
    int a[10][10],b[10][10],c[10][10],row,col;
    printf("Enter row and column for 1st matrix:\n");
    scanf("%d%d",&row,&col);
    //input 1st matrix
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
         
            scanf("%d",&a[i][j]);
        }
    }
    //input 2nd matrix 
     printf("Enter the elements for 2nd matrix:\n");
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           
            scanf("%d",&b[i][j]);
        }
    }
  sum(a,b,c,row,col);
  printf("Matrix sum is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}