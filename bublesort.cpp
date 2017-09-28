#include <stdio.h>
#include<stdio.h>
#include<time.h>

int main()
{
  int n, c, d, swap;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  int array[n];
  printf("There is %d integers\n",n);
  srand((unsigned)time(0));
  for (c = 0; c < n; c++)
    array[c]=(rand()%n)+1;
 clock_t begin = clock();
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
   clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
   printf("\n---------------------------\nRunning time is %lf",time_spent);
  return 0;
}
