#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
   int main()
   {
       int n,r,ncr;
       printf("Enter the value of n and r to calculate ncr:\n");
       scanf("%d%d",&n,&r);
       
       ncr=fact(n)/(fact (r)*fact(n-r));
       printf ("The value of ncr: %d",ncr);
       return 0;
   }