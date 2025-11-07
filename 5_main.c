//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>
int sum(int a1,int an,int step){
    int sum=a1;
    while (a1<=an-step){
        a1=a1+step;
        sum=sum+a1;
    }
    return sum;

}
int main(){
    printf("%d",sum(1,100,1));
}
