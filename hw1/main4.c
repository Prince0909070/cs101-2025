#include <stdio.h>
#include <string.h> 

void reverseArray(char str[]) {
    int len = strlen(str); 
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[] = "Hello"; 
    printf("輸入: %s\n", str);
    reverseArray(str); 
    printf("輸出: %s\n", str); 
    return 0;
}
