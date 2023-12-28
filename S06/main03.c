#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int recurs (int n) {
	static int rez = 0;

	if (n % 2 == 1) {
		rez = rez + 1;
	}
	
	if (n > 1) {
		recurs(n / 2);
	}
	
	return rez; 
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int a;
	
	printf ("Введите число: ");
	scanf("%d", &a);
	printf("%d", recurs(a));
	return 0;
}
