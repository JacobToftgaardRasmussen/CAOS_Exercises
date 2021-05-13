#include <stdio.h>

void createArray(long* a){
    for(int i = 0; i < 20; i++){
        a[i] = 10 + i;
    }
}

void swap(long* a){
    long temp = a[5];
    a[5] = a[0];
    a[0] = temp;
}

int main(){
    long a[20];
    createArray(a);
    
    long* x = &a[3];
    long y = *(x+9);
    printf("%lu, %lx\n", y, y);
    long y2 = *(x+100);
    printf("%lu, %lx\n", y2, y2);
    
    // long y3 = *(x+100000);
    // printf("%lu, %lx\n", y3, y3);
    return 0;
}
