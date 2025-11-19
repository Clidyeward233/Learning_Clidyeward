//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

void selfadd(int *k){
    (*k)++;
}


int main(){
    int arr[5];
    for(int i = 0;i<5;i++){
        scanf("%d",&arr[i]);
        selfadd(&arr[i]);
        printf("%d ",arr[i]);
    }
}
