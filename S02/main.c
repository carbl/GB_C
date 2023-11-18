#include <stdio.h>

int main (void){
    int a1, a2, a3;
    float sa;

    scanf("%d %d %d", &a1, &a2, &a3);

    sa = (a1 + a2 + a3) / 3.f;
    printf("%.2f\n", sa);
    return 0;
}