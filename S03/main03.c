#include <stdio.h>
#include <stdbool.h>

int main (void){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
		if (b < c)
			printf("YES");
		else
			printf("NO");
	else
		printf("NO");

    return 0;
}

