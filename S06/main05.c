#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int get_a (void) {
	
	static int rez = 0;
	char c;
	
	 if ((c = getchar()) != '.') {
		 if (c == 'a') {
			 rez++;
			 
		 }
		 get_a();
	 }
	 return rez;
}

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	printf ("Строка состоящая из английских букв, пробелов и знаков препинания. В конце строки символ '.'\n");
	
	printf ("%d", get_a());
	return 0;
}



