//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

void swap(int *a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}
