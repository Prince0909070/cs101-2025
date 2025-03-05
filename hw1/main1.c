#include <stdio.h>
#include <string.h>
void runLengthEncoding(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char current = str[i];
        int count = 1;
        
        while (i + 1 < len && str[i + 1] == current) {
            count++;
            i++;
        }
        
        printf("%c%d", current, count);
    }
    printf("\n");
}

int main() {
    char ary[] = "AABBBCCCCddd";
    printf("輸入: %s\n", ary);
    printf("輸出: ");
    runLengthEncoding(ary);
    return 0;
}

