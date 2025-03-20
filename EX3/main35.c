#include <stdio.h>

int main(){
    char v = 'A';
    int* p = NULL;
    p =& v;
    
    printf("Address of v: %x\n", v);
    printf("Address stored in p : %x\n", p);
    printf("Address of p : %x\n", &p);
    printf("Value of *p : %d\n", *p);
    
    return 0;
}
