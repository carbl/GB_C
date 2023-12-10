#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int nod (int a, int b);

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a, b;
	
	printf ("Введите два целых положительных числа.\n");
	scanf("%d%d", &a, &b);
	
	printf("%d\n ", nod (a, b));
	return 0;
}

int nod (int a, int b) {
	while (a != 0 && b != 0) {
		if (a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	
	return (a + b);
}

