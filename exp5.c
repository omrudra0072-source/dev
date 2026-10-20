#include <stdio.h>
int A[100];
int min, max;
void minmax(int i, int j)
{
    int mid;
    int newmin, newmax;
    if (i == j)
 {
    min = max = A[i];
 }
  else if (i == j - 1)
  {
     if (A[i] < A[j])
   {
         min = A[i];
         max = A[j];
     }
      else
    {
      min = A[j];
      max = A[i];
      }
  }
   else
 {
   mid = (i + j) / 2;
     minmax(i, mid);
     newmin = min;
     newmax = max;
     minmax(mid + 1, j);
    if (min > newmin)
     min = newmin;

    if (max < newmax)
     max = newmax;
    }
    }
int main()
{
 int n, i;
  printf("Enter the number of elements in array: ");
  scanf("%d", &n);
  printf("Enter the elements:\n");
 for (i = 0; i < n; i++)
 {
   scanf("%d", &A[i]);
  }
  minmax(0, n - 1);
  printf("Minimum element = %d\n", min);
  printf("Maximum element = %d\n", max);
 return 0;
}
