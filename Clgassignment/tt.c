   #include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{

   if (argc != 2) {
        printf("Please give only one input or a input");
        return 1;
    }
    int rows = atoi(argv[1]); 
    if (rows <= 0) {
        printf("Please enter a positive integer as input\n");
        return 1;
    }
    int i,j,k,coef=1,space;
    for(i=0;i<rows;i++)
    {
        space=40-3*i;
        for(k=1;k<=space;k++)
        printf(" ");
          for(j=0;j<=i;j++)
          {
            if(i==0 ||  j==0)
            coef=1;
            else
            coef=coef*(i-j+1)/j;
            printf("%6d",coef);
          }
        printf("\n");  
    }
}