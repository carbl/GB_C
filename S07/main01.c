#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>


double get_num (int a[5])
{

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += a[i];
 }
    return (double)sum / 5;
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	printf ("Введите с клавиатуры массив из 5 элементов.\n");
	
    int arr[5] = {};

for (int i = 0; i < 5; i++) {
	scanf ("%d", &arr[i]);

}
    printf ("Среднее арифметическое = %.3f", get_num(arr));
	return 0;
}
