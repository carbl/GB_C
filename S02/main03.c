#include <stdio.h>

int main (void){
    int a;
    float sa;

    scanf("%d", &a);

    sa = ((a / 1000) + ((a % 1000) / 100) + ((a % 100) / 10) + (a % 10)) / 4.f;

    printf("%.2f\n", sa);
    return 0;
}
