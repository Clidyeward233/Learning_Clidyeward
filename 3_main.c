//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>
int main(){
    int a=0;
    int i=1;
    int k=0;
    scanf("%d",&a);
    while(i<50){
        if (a%i==0){
            k++;
        }else{
            break;
        }
        i++;
    }
    if (k==2){
        printf("密钥不安全，请重新输入");
    }else{
        printf("密钥安全，密码设置成功");
    } 
}
