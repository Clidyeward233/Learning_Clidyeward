//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

void ser(int *list){
    for (int i =0 ;i<10 ;i++){
        for (int j = 0;j<9 ; j++){
            if (list[j]>list[j+1]){
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[10];
    for (int i =0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    ser(arr);
    for (int i =0;i<10;i++){
        printf("%d ",arr[i]);
    }
}
