#include<stdio.h>
int main()
{
  int row,i,j,space;
  printf("Enter row:\n");
  scanf("%d",&row);
  for(i=1;i<=row;i++)
  {
        int num=i;
       for(space=1;space<=row-i;space++)
       {
        printf("  ");
       }
     for(j=1;j<=i;j++)
     {
      printf("%d ",num);
      num++;
     }
     printf("\n");
  }
  return 0;
}