#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a, i = 0;
	
	printf ("Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.\n");
	scanf("%d", &a);

	while (a > 0) {
		a /= 10;
		i++;
	}
	
	if (i == 3) {
		printf("YES");
	} 
	else {
		printf("NO");
	}

    return 0;
}

