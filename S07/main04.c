#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>


int * sort_arr (int a[10]) {
	int tmp,k, n = 10;
	while(n > 1) {
		k = 0; 
		for (int i=1; i < n; i++) {
			if(a[i] % 10 < a[i-1] % 10) {
				tmp = a[i-1];
				a[i - 1] = a[i];
				a[i] = tmp;
				k = i;
			}
		}
		n = k;
	}

    return a;
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	printf ("Введите с клавиатуры массив из 10 элементов.\n");

	
    int i, arr[10] = {};

for (i = 0; i < 10; i++) {
	scanf ("%d", &arr[i]);

}

sort_arr(arr);

  for (i = 0; i < 10; i++) {
	printf ("%d ", arr[i]);
}

	return 0;
}
