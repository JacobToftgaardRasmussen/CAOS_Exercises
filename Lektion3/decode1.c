void decode(long *xp, long *yp, long *zp){
    long *temp = zp;
    long *temp2 = yp;
    yp = xp;
    zp = temp2;
    xp = temp;

}
//xp in %rdi
//yp in %rsi
//zp in %rdx