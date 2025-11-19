//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

int main(){
    int a = 0;
    scanf("%d",&a);
    int *p = &a;
    *p = *p + 10;
    printf("%d,%d",a,*p);
}
