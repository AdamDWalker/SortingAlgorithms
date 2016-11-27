/* Simple C implementation of the bubble sort algorithm.
   Written by Adam Walker 24/11/2016 */
#include <stdio.h>

int* bubbleSort(int*, int);
void printData(int*, int);

int main(int argc, char *argv[])
{

  int testData[20] = {1, 5, 25, 2, 73, 16, 19, 21, 16, 108,
                      11, 45, 2, 9, 66, 12, 38, 27, 83, 60};

  int n = sizeof(testData) / sizeof(testData[0]);

  bubbleSort(testData, n);
  printData(testData, n);

  printf("\nProgram Complete\n");

  return 0;
}

int* bubbleSort(int* data, int n)
{
  int temp = 0;

  for(int j = n - 1; j >= 0; j--)
  {
    for(int i = 0; i <= j - 1; i++)
    {
      if(data[i] > data[i + 1])
      {
        temp = data[i];
        data[i] = data[i + 1];
        data[i + 1] = temp;
      }
    }
  }
  return data;
}

void printData(int* data, int n)
{
  for(int a = 0; a < n; a++)
  {
    printf("%d ", data[a]);
  }
}
