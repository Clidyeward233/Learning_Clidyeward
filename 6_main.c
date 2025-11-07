//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

int sum(int arr[], int length) {
    int total = 0;
    for (int i = 0; i < length; i++) {
        total += arr[i];
    }
    return total;
}

int product(int arr[], int length) {
    int total = 1;
    for (int i = 0; i < length; i++) {
        total *= arr[i];
    }
    return total;
}

int main() {
    int arr[5];
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    
    printf("Sum: %d\n", sum(arr, length));
    printf("Product: %d\n", product(arr, length));
}
