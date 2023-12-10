#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

unsigned long long int mul2 (int a);

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a;
	
	printf ("Ввести количество клеток (от 1 до 64).\n");
	scanf("%d", &a);
		
	if (a < 1 && a > 64) {
		printf("Выввели неверное количество клеток.\n");
		return 1;
	}
	
	printf("%llu\n ", mul2(a));
	return 0;
}

unsigned long long int mul2 (int a) {
	unsigned long long int res = 1;
	for (;a > 1; a--) {
		res *= 2;
	} 
	
	return res;
}

