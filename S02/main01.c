#include <stdio.h>

int main (void){
    int a1, a2, a3;
    int sum;

    scanf("%d %d %d", &a1, &a2, &a3);

    sum = a1 + a2 + a3;
    printf("%d+%d+%d=%d\n", a1, a2, a3, sum);
    return 0;
}
