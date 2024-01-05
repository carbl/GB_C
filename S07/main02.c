#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>


int get_num (int a[5])
{

    int min = a[0];
    for (int i = 1; i < 5; i++) {
        if ( a[i] < min) {
			min = a[i];
		}
 }
    return min;
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	printf ("Введите с клавиатуры массив из 5 элементов.\n");
	
    int arr[5] = {};

for (int i = 0; i < 5; i++) {
	scanf ("%d", &arr[i]);

}
    printf ("Минимальное = %d", get_num(arr));
	return 0;
}
