#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a;
	
	printf ("Ввести целое число и определить, верно ли, что все его цифры четные.\n");
	scanf("%d", &a);
	
	if (a < 0) {
		a *= -1;
	}

	while (a > 0) {

		if ((a % 10) % 2 != 0) {
			printf("NO");
			return 0;
		}
		a /= 10;
	}

	printf("YES");

    return 0;
}

