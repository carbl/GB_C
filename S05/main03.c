#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int is_happy_number (int n);

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a;
	
	printf ("Введите целое не отрицательное число.\n");
	scanf("%d", &a);
	
	is_happy_number (a) ? printf("YES") : printf("NO");
	return 0;
}

int is_happy_number (int n) {
	int sum = 0, mul = 1;
	while (n > 0) {
		sum += n % 10;
		mul *= n %10;
		n /=10;
	}
	
	return (sum == mul);
}

