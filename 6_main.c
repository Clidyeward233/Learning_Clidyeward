//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = (int*) malloc(5*sizeof(int));

    for (int i = 0 ; i<5 ; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0 ;i<5 ; i++){
        printf("%d ",arr[i]);
    }
    free(arr);
}
