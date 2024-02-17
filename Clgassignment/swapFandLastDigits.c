#include <stdio.h>

int main() {
  int n, firstDigit, lastDigit, swappedNum;

  printf("Enter a number: ");
  scanf("%d", &n);

  // Find the last digit of the number.
  lastDigit = n % 10;

  // Find the first digit of the number.
  firstDigit = n / 10;

  // Swap the first and last digits.
  swappedNum = lastDigit * 10 + firstDigit;

  // Print the swapped number.
  printf("The number with its first and last digits swapped is: %d\n", swappedNum);

  return 0;
}