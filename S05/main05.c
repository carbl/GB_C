#include <Windows.h>
#include <stdio.h>
#include <stdbool.h>

int get_text (void);

int main (void){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	printf ("Введите строку.\n");
	
	get_text() ? printf("NO") : printf("YES");
	return 0;
}

int get_text (void) {
	
	char c;
	int chars;
	
	while ((c = getchar()) != '.') {
		if (c == '(') {
			chars ++ ;
		}
		if (c == ')') {
			
			chars --;
		}
		if (chars < 0 && (c == '(' || c == ')')) {
		
			chars = 0;
		}
	}
		return chars;
}

