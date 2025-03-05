#include <stdio.h>
void runLengthDecoding(char str[]) {
    int i, j;
    
    for (i = 0; str[i] != '\0'; i++) {
        char current = str[i]; 
        int count = 0; 
  
        while (str[i + 1] >= '0' && str[i + 1] <= '9') {
            count = count * 10 + (str[i + 1] - '0'); 
            i++;
        }
        
        for (j = 0; j < count; j++) {
            printf("%c", current);
        }
    }
    printf("\n"); 
}

int main() {
    char encoded[] = "A4B1C3f3"; 
    printf("輸入: %s\n", encoded);
    printf("輸出: ");
    runLengthDecoding(encoded);
    return 0;
}
