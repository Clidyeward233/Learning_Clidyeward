//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>
int main(){
    int arr[5];
    for(int i = 0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    for(int i = 0;i<5;i++){
    *p = *p * 2;
    printf("%d ",*p);
    p++;
    }
}
