/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>
*/
void sort_even_odd(int size, int a[])
{
  int *l, m = 0;
  l = (int*)malloc(size * sizeof(int));
 
  for( int k=0; k < size; k++) {
	  if (a[k] % 2 == 0) {
		l[m] = a[k];
		m++;
	}
}

  for( int n=0; n < size; n++) {
	  if (a[n] % 2 != 0) {
		l[m] = a[n];
		m++;
	}
}
          
   for(int j = 0; j < size; j++) {
        printf("%d ", l[j]);
    }
    free(l);
}
/*
int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int m[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

   for(int j = 0; j < sizeof(m)/sizeof(m[0]); j++)
   {
        printf("%d ", m[j]);
    }
printf("\n");
sort_even_odd(sizeof(m)/sizeof(m[0]), m);

  
    return 0;
}
*/ 
