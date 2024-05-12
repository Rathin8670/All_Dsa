#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
     printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    int len=strlen(str1);
    for(int i=0;i<len;i++){
   
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ' || (i > 0 && str1[i - 1] != ' ')) {
          str2[i] = str1[i+1];
       //  j++;
        }
    }

   // str2[j] = '\0';

    printf("String after removing extra spaces: %s", str2);

    return 0;
}
