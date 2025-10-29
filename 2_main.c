//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>
#include <math.h>
int main(){
    int i,j,k;
    for(i=1;i<=9;i++){
        for(j=0;j<=9;j++){
            for(k=0;k<=9;k++){
                if(100*i+10*j+k==pow(i,3)+pow(j,3)+pow(k,3)){
                    printf("%d ",(int)100*i+10*j+k);
                }
            }
        }
    }
}
