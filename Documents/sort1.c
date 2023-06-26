#include <stdio.h>

int str_len(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

int main() {
    char str[100];
    printf("请输入一个字符串：\n");
    scanf("%s", str);
    int len = str_len(str);
    printf("字符串的长度为 %d。\n", len);
    return 0;
}

