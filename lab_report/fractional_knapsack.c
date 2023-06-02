#include <stdio.h>

int main()
{
  int capacity = 10;

  int values[] = {4, 2, 2, 1, 10};
  int weights[] = {12, 1, 2, 1, 4};

  double ratios[5];
  for (int i = 0; i < 5; i++)
  {
    ratios[i] = (double)values[i] / weights[i];
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (ratios[i] < ratios[j])
      {
        double temp = ratios[i];
        ratios[i] = ratios[j];
        ratios[j] = temp;

        int temp2 = values[i];
        values[i] = values[j];
        values[j] = temp2;

        int temp3 = weights[i];
        weights[i] = weights[j];
        weights[j] = temp3;
      }
    }
  }

  double totalValue = 0.0;
  double totalWeight = 0.0;

  for (int i = 0; i < 5; i++)
  {
    if (totalWeight + weights[i] <= capacity)
    {
      totalValue += values[i];
      totalWeight += weights[i];
    }
    else
    {
      double fraction = (double)(capacity - totalWeight) / weights[i];
      totalValue += values[i] * fraction;
      totalWeight += weights[i] * fraction;
      break;
    }
  }

  printf("The total value of the items in the knapsack is %.2f\n", totalValue);

  return 0;
}