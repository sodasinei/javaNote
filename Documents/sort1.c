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
    printf("������һ���ַ�����\n");
    scanf("%s", str);
    int len = str_len(str);
    printf("�ַ����ĳ���Ϊ %d��\n", len);
    return 0;
}

