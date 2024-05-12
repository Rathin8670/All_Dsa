#include <stdio.h>
#include<string.h>


int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);

  // Find the length of the string
  int len = strlen(str);

  // Reverse the string
  for (int i = 0, j = len - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  // Print the reversed string
  printf("The reversed string is: %s\n", str);

  return 0;
}
