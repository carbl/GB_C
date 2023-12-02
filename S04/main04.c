#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a, a1, i = 1;
	
	printf ("Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.\n");
	scanf("%d", &a);
	
	if (a < 0) {
		a *= -1;
	}
	a1 = a;

	while (a1 > 0) {
		a1 /= 10;
		i *= 10;
	}

	for (int idx = i/10; idx >= 1;) {
		a1 += a%10 * idx;
		a /= 10;
		idx /= 10;
	}

	printf("%d\n", a1);

    return 0;
}

