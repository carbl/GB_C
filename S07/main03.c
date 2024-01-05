#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>


int * get_num (int a[12], int b [12]) {

        
    for (int i = 0; i < 12; i++) {
        if (i + 4 < 12) {
			b[i + 4] = a[i];
		}
			else {
			b[i + 4 - 12] = a[i];
		}
			
 }
    return b;
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	printf ("Введите с клавиатуры массив из 12 элементов.\n");

	
    int i, arr[12] = {}, new_arr[12] = {};

for (i = 0; i < 12; i++) {
	scanf ("%d", &arr[i]);

}

get_num(arr, new_arr);

  for (i = 0; i < 12; i++) {
	printf ("%d ", new_arr[i]);
}

	return 0;
}
