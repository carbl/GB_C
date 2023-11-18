#include <stdio.h>

int main (void){
    int a1, a2, a3;
    int sum, mul;

    scanf("%d %d %d", &a1, &a2, &a3);

    sum = a1 + a2 + a3;
    mul = a1 * a2 * a3;
    
    printf("%d+%d+%d=%d\n", a1, a2, a3, sum);
    printf("%d*%d*%d=%d\n", a1, a2, a3, mul);
    
    return 0;
}
