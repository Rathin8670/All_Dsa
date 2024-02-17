#include <stdio.h>
#include<stdbool.h>


int main() {
  // Declare variables
  int size, i, j, k;
  int array[100];

  // Get the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  // Get the elements of the array
  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  // Create a new array to store the unique elements
  int new_array[size];
  k = 0;

  // Iterate over the original array and copy the unique elements to the new array
  for (i = 0; i < size; i++) {
    bool is_duplicate = false;
    for (j = 0; j < k; j++) {
      if (array[i] == new_array[j]) {
        is_duplicate = true;
        break;
      }
    }

    if (!is_duplicate) {
      new_array[k++] = array[i];
    }
  }

  // Print the new array without duplicates
  printf("The new array without duplicates is: \n");
  for (i = 0; i < k; i++) {
    printf("%d ", new_array[i]);
  }

  return 0;
}


