#include <stdio.h>

int tadd_ok(int x, int y){
    return x + y;
}

int tadd_ok2(int x, int y){
    if(x > 0 && y > 0 &&){
        if(x + y < 0){
            return 0;
        }
    }

    if()
        
    
}

int main(){
    int x = 2147483647;
    int y = 0;
    int z = 1;
    printf("%i + %i = %i\n", x, y, tadd_ok(x,y));
    printf("%i + %i = %i\n", x, z, tadd_ok(x,z));
    printf("%i + %i = %i\n", x, y, tadd_ok(x,y));
    printf("%i + %i = %i\n", x, y, tadd_ok(x,y));
    printf("%i + %i = %i\n", x, y, tadd_ok(x,y));

    return 0;
}
