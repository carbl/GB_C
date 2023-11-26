#include <stdio.h>
#include <stdbool.h>

int main (void){
	int a;
	scanf("%d", &a);
	if (a == 12 || (a >= 1 && a < 3)) 
		printf("winter");
	else
		if (a >= 3 && a < 6)
			printf("spring");
		else
			if (a >= 6 && a < 9)
				printf("summer"); 
			else
				if (a >= 9 && a < 12)
					printf("autumn");
				else
					printf("unknown month");
		

    return 0;
}

