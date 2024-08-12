/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>
*/
void sort_array(int size, int a[])
{
  int k, l;
  int x;
 
  for( k=0; k < size; k++) {            
    for( l = size-1; l > k; l-- ) { 
      if ( a[l-1] > a[l] ) {
      x=a[l-1];
      a[l-1]=a[l];
      a[l]=x;
    }
  }
}
   for(int j = 0; j < size; j++)
   {
        printf("%d ", a[j]);
    }
}
/* 
int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int m[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};

   for(int j = 0; j < sizeof(m)/sizeof(m[0]); j++)
   {
        printf("%d ", m[j]);
    }
printf("\n");
sort_array(sizeof(m)/sizeof(m[0]), m);

  
    return 0;
}
*/ 
