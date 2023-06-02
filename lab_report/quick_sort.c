
void quickSort(int array[], int size)
{

  if (size <= 1)
  {
    return;
  }
  int pivot = array[size - 1];

  int i = 0;
  for (int j = 0; j < size - 1; j++)
  {

    if (array[j] < pivot)
    {
      int temp = array[j];
      array[j] = array[i];
      array[i] = temp;

      i++;
    }
  }

  int temp = array[i];
  array[i] = array[size - 1];
  array[size - 1] = temp;
  quickSort(array, i);
  quickSort(array + i + 1, size - i - 1);
}

int main()
{

  int array[] = {6, 3, 7, 2, 4, 5};

  int size = sizeof(array) / sizeof(array[0]);
  printf("Unsorted array: \n");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  quickSort(array, size);

  printf("Sorted array: \n");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}