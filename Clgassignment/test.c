#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],s2[100];
   printf("Enter your string:\n");
   gets(s1);
   strcpy(s2,s1);
   strlwr(s2);
   int len= strlen(s2);
  int i=0,j=0,m,n,max=0,c=0,k=0,kk=0;
  while(i<len)
  {
     c=0;
    k=0;
    while(s2[j]!=' '&& j<len)
    {
      k++;
     if(s2[j]!='a'&&s2[j]!='e'&&s2[j]!='i'&&
         s2[j]!='o'&&s2[j]!='u')
        {
           c++;
        }
        j++;
    }
    if(c>max)
    {
      max=c;
      kk=k;
      m=i;
      n=j; 
    }
      j++;
    i=j;
      
    }
    printf("The word which is most number of consonants:\n");
    for(i=m;i<n;i++)
    { 
       printf("%c",s1[i]);
    }
    printf("\nLength=%d",kk);
    printf("\n No. of consonants=%d",max);
    return 0;
}