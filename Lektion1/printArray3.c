#include <stdio.h>

void createArray(long* a){
    for(int i = 0; i < 20; i++){
        a[i] = 10 + i;
    }
}

int main(){
    long a[20];
    createArray(a);
    long* x = &a[3];
    printf("%lu", *x);
    return 0;
}
