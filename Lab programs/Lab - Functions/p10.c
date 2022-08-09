#include <stdio.h>
int bin(int a[], int start_index, int end_index, int element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (a[middle] == element)
         return middle;
      if (a[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main()
{
   const int n;
   printf("Enter size of array :");
   scanf("%d", &n);
   int a[n];
   for (int i = 0; i < n; i++)
   {
      printf("Enter %dth element :",i);
      scanf("%d", &a[i]);
   }
   int element;
   printf("Enter element to be searched :");
   scanf("%d", &element);
   int index = bin(a, 0, n-1, element);
   if(index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",index);
   }
   return 0;
}