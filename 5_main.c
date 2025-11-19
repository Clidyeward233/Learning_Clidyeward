//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

void next(int *ptr,int len){
    for (int i = len -1 ; i>0 ; i--){
        ptr[i] = ptr[i-1];
    }
    ptr[0] = 0;
}



int main(){
    int arr[5];
    for (int i = 0;i<5; i++){
        scanf("%d",&arr[i]);
    }
    next(arr,5);
    for (int i = 0;i<5; i++){
        printf("%d ",arr[i]);
    }
}
