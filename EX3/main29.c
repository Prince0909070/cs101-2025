#include <stdio.h>

int main(){
    int* ip;
    *ip = 2;
    
    printf("%x\n", *ip);

    return 0;
}
