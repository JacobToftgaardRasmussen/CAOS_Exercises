#include <stdio.h>

int main(){

    unsigned int xU = -2147483647;
    signed int   xS = -2147483647 -1U;

    printf("xU -> Unsigned: %u, signed: %d\n", xU, xU);
    printf("xS -> Unsigned: %u, signed: %d\n", xS, xS);

    printf("-2147483647 -1U <  2147483647: %d\n", (-2147483647 -1U < 2147483647));
    printf("-2147483647 -1U < -2147483647: %d\n", (-2147483647 -1U < -2147483647));
    printf("-2147483647 -1U: %u \n", (-2147483647 -1U));

    return 0;
}