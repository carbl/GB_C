#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

void recurs (int a, int b) {

	printf ("%d ", a);

	if (a < b) {
		recurs (a + 1, b);
	}
	
	if (a >  b) {
		recurs (a - 1, b);
	}
	
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int a, b;
	
	printf ("Введите два числа: ");
	scanf("%d%d", &a, &b);
	recurs(a, b);
	return 0;
}
