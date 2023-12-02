#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a, b, sum = 0;
	
	printf ("Ввести два целых числа a и b (a <= b) по модулю не больше 100\n");
	scanf("%d%d", &a, &b);

	if (a < 0) {
		a *= -1;
	}
	if (b < 0) {
		b *= -1;
	}
	if (a >= 100 || b >= 100) {
		printf ("Не выполнено условие\n");
		return 1;
	}
	
	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}
		
	for (int i = a; i <= b; i++) {
		sum += i * i;
	}
	
	printf("Сумма квадратов %d", sum);		

    return 0;
}

