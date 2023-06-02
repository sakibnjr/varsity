#include <stdio.h>
int main()
{
  int data[] = {5, 2, 9, 11, 4, 8};
  int key = 9;

  int i;
  for (i = 0; i < 6; i++)
  {
    if (data[i] == key)
    {
      printf("Item found at index : %d", i);
      return 0;
    }
  }
  printf("Item not found!");

  return 0;
}