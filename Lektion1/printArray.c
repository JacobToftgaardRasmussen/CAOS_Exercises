#include <stdio.h>

void createArray(long* a){
    for(int i = 0; i < 20; i++){
        a[i] = 10 + i;
    }
}

int main(){
    long a[20];
    createArray(a);
    for(int i = 0; i < 20; i++){
        printf("%lu, %lx\n", *(a + i), *(a + i));
    }
    return 0;
}
