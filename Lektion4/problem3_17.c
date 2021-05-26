long lt_cnt = 0;
long ge_cnt = 0;

long gotodiff_se(long x, long y){
    long result;
    if(x >= y)
        goto x_ge_y;
    lt_cnt++;
    result = y - x;
    return result;
x_ge_y:
    ge_cnt++;
    result = x - y;
    return result;
}

long gotodiff_se_alertanative(long x, long y){
    long result;
    int t = x >= y;
    if(t)
        goto true;
    lt_cnt++;
    result = y - x;
        goto done;
    true:
        ge_cnt++;
        result = x - y;
        goto done;
    done:
        return result;

}