#include<stdio.h>

void reverse(int array[], int si, int ei);

int main() {
    int i, n, k;

    printf("How many numbers do you want to take as input: ");
    scanf("%d", &n);

    int array[n];

    // Taking input
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("How many times do you want to rotate: ");
    scanf("%d", &k);

    // Normalize k to ensure it's within the range of array length
    k = k % n;

    // Rotate the array
    reverse(array, 0, n - 1); // Reverse the entire array
    reverse(array, 0, k - 1); // Reverse the first k elements
    reverse(array, k, n - 1); // Reverse the remaining elements

    // Printing the rotated array
    printf("Rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void reverse(int array[], int si, int ei) {
    int i, j, temp;

    // Reversing the array using a for loop
    for (i = si, j = ei; i < j; i++, j--) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
