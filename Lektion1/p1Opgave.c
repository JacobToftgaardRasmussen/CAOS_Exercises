void encrypt(char password[], unsigned long key) {
    unsigned long i = 0;

    for(i = 0; i < strlen(password); i++){
        password[i] -= key;
    }
}

