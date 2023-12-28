#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

void get_num (void) {

}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	printf ("Введите числа. Окончание ввода 0.\n");
	
	get_num();
	return 0;
}



