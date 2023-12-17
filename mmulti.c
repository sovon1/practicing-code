#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}





#include <stdio.h>

int main() {

    int i, j, k;
    int numOfRows1, numOfCols1, numOfRows2, numOfCols2;
    int A[10][10], B[10][10], C[10][10];

    printf("How many rows and columns for the first matrix: ");
    scanf("%d %d", &numOfRows1, &numOfCols1);

    printf("How many rows and columns for the second matrix: ");
    scanf("%d %d", &numOfRows2, &numOfCols2);

    while (numOfCols1 != numOfRows2) {
        printf("Error: Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");

        printf("How many rows and columns for the first matrix: ");
        scanf("%d %d", &numOfRows1, &numOfCols1);

        printf("How many rows and columns for the second matrix: ");
        scanf("%d %d", &numOfRows2, &numOfCols2);
    }

    // Scanning matrix A
    printf("Enter elements for A matrix.\n");
    for (i = 0; i < numOfRows1; i++) {
        for (j = 0; j < numOfCols1; j++) {
            printf("A [%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // Scanning matrix B
    printf("Enter elements for B matrix.\n");
    for (i = 0; i < numOfRows2; i++) {
        for (j = 0; j < numOfCols2; j++) {
            printf("B [%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    // Multiplying matrices A and B
    for (i = 0; i < numOfRows1; i++) {
        for (j = 0; j < numOfCols2; j++) {
            C[i][j] = 0;
            for (k = 0; k < numOfCols1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Printing matrices A, B, and the result C
    printf("The A matrix is:\n");
    for (i = 0; i < numOfRows1; i++) {
        for (j = 0; j < numOfCols1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("The B matrix is:\n");
    for (i = 0; i < numOfRows2; i++) {
        for (j = 0; j < numOfCols2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
//printing multiplied matrix
    printf("The result matrix C (A * B) is:\n");
    for (i = 0; i < numOfRows1; i++) {
        for (j = 0; j < numOfCols2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
