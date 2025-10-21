//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a+b>c && b+c>a && c+a>b)?printf("可以组成三角形"):printf("不能组成三角形");
}
