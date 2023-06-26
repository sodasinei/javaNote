#include <stdio.h>

int find_max(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    } else {
        int max = find_max(arr, n - 1);
        return arr[n - 1] > max ? arr[n - 1] : max;
    }
}

int main() {
    int arr[4];
    int i;
    printf("输入四个数: ");
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    int max = find_max(arr, 4);
    printf("max: %d\n", max);
    return 0;
}
