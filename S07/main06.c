#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>


int max_arr (int a[10]) {
	
	int num = a[0], max_frq = 1;

    for (int i=0; i < 9; i++) {
        int frq = 1;
        for (int k = i+1; k< 10; k++) {
            if (a[i] == a[k]) {
                frq += 1;
			}
		}

        if (frq > max_frq) {
            max_frq = frq;
            num = a[i];
        }
    }

    if (max_frq > 1){
        printf("%d\n", num);
	}
    else {
        printf("Нет числа которое встечается больше.\n");
	}

    return 0;
}



int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	printf ("Введите с клавиатуры массив из 10 элементов.\n");

	
    int i, arr[10] = {};

	for (i = 0; i < 10; i++) {
		scanf ("%d", &arr[i]);

	}
	
	max_arr(arr);


	return 0;
}
