void cond(short a, short *p){
    if(a){
        goto if2;
    }

    if2:
        if(*p < a){
            *p = a;
        }
}