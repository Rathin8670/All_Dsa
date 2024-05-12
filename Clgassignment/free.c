#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int frequency[256] = {0};

  printf("Enter a string: ");
  scanf("%s", str);

  // Iterate over the characters in the string
  for (int i = 0; str[i] != '\0'; i++) {
    frequency[str[i]]++;
  }

  // Print the frequency of each character
  for (int i = 0; i < 256; i++) {
    if (frequency[i] > 0) {
      printf("The frequency of '%c' is %d.\n", i, frequency[i]);
    }
  }

  return 0;
}
