#include <stdio.h>

int main(int argc, char *argv[])
{

  int testData[10] = {1, 5, 25, 2, 73, 16, 19, 21, 16, 108};

  int i, j, n, temp = 0;
  n = sizeof(testData) / sizeof(testData[0]);

for(int j = n - 1; j >= 0; j--)
{
  for(i = 0; i <= j - 1; i++)
  {
    if(testData[i] > testData[i + 1])
    {
      temp = testData[i];
      testData[i] = testData[i + 1];
      testData[i + 1] = temp;
    }
  }
}

  for(int a = 0; a < 10; a++)
  {
    printf("%d ", testData[a]);
  }

  printf("\nDone, Also N = %d\n", n);

  return 0;
}
