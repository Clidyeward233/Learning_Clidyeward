//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>
int pow1(int a,int b){
    int end = a;
    for(int i=1;i<b;i++){
        end=end*a;
    }
    return end;
}
int main(){
    printf("%d",pow1(1,2)+pow1(2,2)+pow1(3,2)+pow1(4,2)+pow1(5,2));
}
