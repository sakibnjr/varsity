#include <stdio.h>

void mergeSort(int array[], int start, int end)
{
  if (start < end)
  {
    int mid = (start + end) / 2;
    mergeSort(array, start, mid);
    mergeSort(array, mid + 1, end);
    merge(array, start, mid, end);
  }
}

void merge(int array[], int start, int mid, int end)
{
  int n1 = mid - start + 1;
  int n2 = end - mid;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
  {
    L[i] = array[start + i];
  }

  for (int j = 0; j < n2; j++)
  {
    R[j] = array[mid + 1 + j];
  }

  int i = 0, j = 0, k = start;

  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
    {
      array[k] = L[i];
      i++;
    }
    else
    {
      array[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    array[k] = L[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    array[k] = R[j];
    j++;
    k++;
  }
}

int main()
{
  int array[] = {5, 1, 6, 2, 4, 3};
  int n = sizeof(array) / sizeof(array[0]);

  mergeSort(array, 0, n - 1);

  printf("After Sorting : ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}