#include <stdio.h>

int main() {
  int rows;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        printf("1 ");
      } else {
        printf("%d ", (i - j + 1) / j);
      }
    }
    printf("\n");
  }

  return 0;
}
