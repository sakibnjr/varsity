#include <stdio.h>
int main()
{

  int data[] = {4, 1, 3, 9, 22, 10};
  int i, j, size = 6;

  int swap;
  for (i = 0; i < size - 1; i++)
  {
    swap = 0;
    for (j = 0; j < size - i - 1; j++)
    {
      if (data[j] > data[j + 1])
      {
        int temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
    if (swap == 0)
    {
      break;
    }
  }
  printf("After Sorting \n");
  for (i = 0; i < size; i++)
  {
    printf("%d ", data[i]);
  }
  printf("\n");
  return 0;
}