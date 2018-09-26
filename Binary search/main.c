#include <stdio.h>
#include<stdlib.h>

int main()
{
   int i, first, last, mid, n, search, array[100];

   printf("Enter the number of elements\n");
   scanf("%d",&n);

   printf("Enter %d integers\n", n);

   for (i = 0; i < n; i++)
      scanf("%d",&array[i]);

   printf("Enter value to find\n");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   mid = (first+last)/2;

   while (first <= last) {
      if (array[mid] < search)
         first = mid + 1;
      else if (array[mid] == search) {
         printf("%d found at location %d.\n", search, mid+1);
         break;
      }
      else
         last = mid - 1;

      mid = (first + last)/2;
   }
   if (first > last)
      printf("%d NOT FOUND", search);

   return 0;
}
