#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int get_e (int e, int a) {
	
	static int rez = 1;
	if (a  > 0) {
		rez *= e;
		a--;
		get_e (e, a);
	}
	return rez;
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int e, a;
	printf ("Два целых числа -100 >= n >= 100 и 0 >= p >= 100\n");
	scanf ("%d%d", &e, &a);
	
	printf ("%d", get_e(e, a));
	return 0;
}



