//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>
int main(){
    int a,i=0;
    int b[5];
    while(i<5){
        scanf("%d\n",&a);
        if(a%2==0){
            b[i]=a;
            i++;
        }
    }
    for(i=0;i<4;i++){
        printf("%d ",b[i]);
    }
    printf("%d",b[4]);
}

