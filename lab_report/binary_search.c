#include <stdio.h>
int main()
{

  int data[] = {1, 2, 4, 5, 9, 33, 89};
  int key = 9;

  int left, right, middle;
  left = 0;
  right = 6;

  while (left <= right)
  {
    middle = (left + right) / 2;

    if (data[middle] == key)
    {
      printf("Item found at index: %d\n", middle);
      return 0;
    }
    else if (data[middle] < key)
    {
      left = middle + 1;
    }
    else
    {
      right = middle - 1;
    }
  }
  printf("Item not found!\n");

  return 0;
}
