#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int sum_number (int n);

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a;
	
	printf ("Введите целое не отрицательное число.\n");
	scanf("%d", &a);
	
	printf("%d", sum_number (a));
	return 0;
}

int sum_number (int n) {
	int sum = 0;
	while (n > 0) {
		sum += n;
		n--;
	}
	
	return sum;
}

