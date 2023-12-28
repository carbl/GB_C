#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

void recurs (int n) {

	if (n >= 10) {
		recurs (n / 10);
	}
		printf ("%d ", n % 10);
	
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int n;
	
	printf ("Введите число: ");
	scanf("%d", &n);
	recurs(n);
	return 0;
}
