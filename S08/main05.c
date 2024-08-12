
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>

void change_max_min(int size, int a[])
{
 int min = a[0];
 int max = a[0];
 int min_index = 0;
 int max_index = 0;
 int change = 0;
  for( int k=1; k < size; k++) {
	if (a[k] > max) {
		max = a[k];
		max_index = k;
			
	}
	if (a[k] < min) {
		min = a[k];
		min_index = k;
	}

}
change = a[min_index];
a[min_index] = a[max_index];
a[max_index] = change;

}

int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int m[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
		 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
		 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
		 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
		 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81,
		 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97,
		 98, 99, 100};

   for(int j = 0; j < sizeof(m)/sizeof(m[0]); j++)
   {
        printf("%d ", m[j]);
    }
printf("\n");
change_max_min(sizeof(m)/sizeof(m[0]), m);

   for(int j = 0; j < sizeof(m)/sizeof(m[0]); j++)
   {
        printf("%d ", m[j]);
}
  
    return 0;
}


