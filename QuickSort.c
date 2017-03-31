/*
 * This is my implementation of the quick sort algorithm written in C
 * Written by Adam Walker 31/03/17
 */

#include <stdio.h>

void quickSort(int*, int);
void swap();
void printData(int*, int);

int main(int argc, char* argv[])
{
    /* This is the same set of test data for each algorithm in order to compare them */
    int testData[20] = {1, 5, 25, 2, 73, 16, 19, 21, 16, 108,
                      11, 45, 2, 9, 66, 12, 38, 27, 83, 60};

    int n = sizeof(testData) / sizeof(testData[0]);

    quickSort(testData, n);
    printData(testData, n);

    printf("\nProgram Complete\n");

    return 0;
}

void quickSort(int* A, int n)
{
    if (n < 2) return;

    int pivot = A[n / 2];

    int l, r;
    for (l = 0, r = n - 1; ; l++, r--)
    {
        while (A[l] < pivot) l++;
        while (A[r] > pivot) r--;

        if (l >= r) break;

        int temp = A[l];
        A[l] = A[r];
        A[r] = temp;
    }

    quickSort(A, l);
    quickSort(A + l, n - l);
}

void printData(int* data, int n)
{
  for(int a = 0; a < n; a++)
  {
    printf("%d ", data[a]);
  }
}
