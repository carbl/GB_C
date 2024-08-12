
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>

void find_dubl(char txt[])
{
	printf("%s\n", txt);
	char first_str[102];
	char second_str[102];
	char str[102];
	int o = 0;
	FILE *f;
	f = fopen (txt, "r");
	fscanf (f, "%s", first_str);
	fscanf (f, "%s", second_str);
	fclose (f);
	
	printf("%s\n", first_str);
	printf("%s\n", second_str);
	for (int i = 0; first_str[i] != 0; i++) {
		for (int j = 0; second_str[j] != 0; j++) {
			if (first_str[i] == second_str[j])
			str[o++] = second_str[j];
		
		}
	}
	printf("%s\n", str);
	
	char char_i = str[0];
	int index = 1;
	for (int i = index; i < o; i++) {
		if (str[i] != char_i) {
			printf("%c ", char_i);
			
		}
		char_i = str[i];
		
		}
		index++;
return;
}

int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

find_dubl("1.txt");

    return 0;
}


