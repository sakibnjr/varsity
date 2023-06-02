#include <stdio.h>
int main()
{
  int numbers[] = {8, 4, 1, 3, 2};
  int i, value, hole;
  for (i = 1; i < 5; i++)
  {
    value = numbers[i];
    hole = i;
    while (hole > 0 && numbers[hole - 1] > value)
    {
      numbers[hole] = numbers[hole - 1];
      hole--;
    }
    numbers[hole] = value;
  }
  printf("Sorted numbers \n");
  for (i = 0; i < 5; i++)
  {
    printf("%d ", numbers[i]);
  }
}