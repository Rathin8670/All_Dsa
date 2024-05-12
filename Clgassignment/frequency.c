#include<stdio.h>
int main(){
    int arr[100],c,i;
    int fre[100];
    int s=5;
    for( i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }


    for( i=0;i<s;i++){
        fre[i]=0;
    }

    for( i=0;i<s;i++)
    {
        c=1;

        
        for(int j=i+1;j<s;j++){
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
         fre[i]=c;
    }
   
    printf("FRejhjkhmn is ;\n");
    for(i=0;i<s;i++){
        printf("%d occurs %d times\n",arr[i],fre[i]);
    }
return 0;
}