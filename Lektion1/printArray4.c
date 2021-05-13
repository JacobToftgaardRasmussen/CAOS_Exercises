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
    swap(a);
    for(int i = 0; i < 20; i++){
        printf("%lu ", a[i]);
    }
    return 0;
}
