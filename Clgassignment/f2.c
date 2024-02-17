#include <stdio.h>

int main() {
  // Declare variables
  int size, i, j, count;
  int array[100];
  int frequency[100];

  // Get the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  // Get the elements of the array
  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  // Initialize the frequency array
  for (i = 0; i < size; i++) {
    frequency[i] = 0;
  }

  // Count the frequency of each element
  for (i = 0; i < size; i++) {
    count = 1;
    for (j = i + 1; j < size; j++) {
      if (array[i] == array[j]) {
        count++;
      }
    }
    frequency[i] = count;
  }

  // Print the frequency of each element
  printf("The frequency of each element is: \n");
  for (i = 0; i < size; i++) {
    printf("%d occurs %d times\n", array[i], frequency[i]);
  }

  return 0;
}
