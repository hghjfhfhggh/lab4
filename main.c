#include <stdio.h>
#include <stdlib.h>

extern void quick_sort(int *array, long count);

int main()
{
  long count;
  scanf("%ld", &count);

  int *array = malloc(count * sizeof(int));

  for (long i = 0; i < count; i++)
  {
    scanf("%d", &array[i]);
  }

  quick_sort(array, count);

  for (long i = 0; i < count; i++)
  {
    if (i > 0)
    {
      printf(" ");
    }

    printf("%d", array[i]);
  }

  printf("\n");

  free(array);

  return 0;
}
