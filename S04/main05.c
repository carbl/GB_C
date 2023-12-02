#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a, sum, mul, idx;
	
	printf ("Ввести натуральное число от 10.\n");
	scanf("%d", &a);
	
	if (a < 10) {
		printf("Выввели чило меньше 10.\n");
		return 1;
	}


	for (int i = 10; i <= a; i++) {
		sum = 0;
		idx = i;
		mul = 1;
		while (idx > 0 ) {
			sum += idx%10;
			mul *= idx%10;
			idx /= 10;
		}

			if (sum == mul) {
				printf("%d ", i);
			}
		
	}
	printf("\n");
	

    return 0;
}

