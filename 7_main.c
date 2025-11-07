//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

void reverseArray(int arr[], int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int arr[5];
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    
    reverseArray(arr, length);
    
    // Print the reversed array
    for (int i = 0; i < length; i++) {
        printf("%d", arr[i]);
        if (i < length - 1) {
            printf(" ");
        }
    }
    
    return 0;
}
