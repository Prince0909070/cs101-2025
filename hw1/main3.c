#include <stdio.h>
void binaryToHex(char binary[]) {
    int decimal = 0;
    int i = 0;

    // 將二進位字串轉換為十進位
    while (binary[i] != '\0') {
        decimal = decimal * 2 + (binary[i] - '0'); 
        i++;
    }

    // 以十六進位格式輸出
    printf("%X\n", decimal);
}

int main() {
    char binary[] = "10001111"; 
    printf("輸入: %s\n", binary);
    printf("輸出: ");
    binaryToHex(binary);
    return 0;
}
