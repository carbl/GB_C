#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>


int * get_arr (int a[10], int b[]) {
	
	for (int i = 0; i < 10; i++) {
		if (((a[i] % 100) / 10) == 0) {
			b[i] = a[i];
			printf ("%d ", b[i]);
		}
	}
    return b;
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	printf ("Введите с клавиатуры массив из 10 элементов.\n");

	
    int i, arr[10] = {}, new_arr [] = {};

for (i = 0; i < 10; i++) {
	scanf ("%d", &arr[i]);

}

get_arr(arr, new_arr);

	return 0;
}
