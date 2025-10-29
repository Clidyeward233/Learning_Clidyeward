//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>
#include <math.h>
int main(){
    int i=1;
    int k,j=0;
    while(i<=9){
        j=0;
        while(j<=9){
            k=0;
            while(k<=9){
                if(100*i+10*j+k==pow(i,3)+pow(j,3)+pow(k,3)){
                    printf("%d ",(int)100*i+10*j+k);
                }
                k++;
            }
            j++;
        }
        i++;
    }
}
