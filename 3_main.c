//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>
int main(){
    int list[10];
    for(int i=0;i<10;i++){
        int input = 0;
        scanf("%d",&input);
        list[i]=input;
    }
    for(int k=0;k<10;k++){
        for(int i = 0;i<10;i++){
            if(list[i] > list[i+1]){
            int middle = list[i];
            list[i]=list[i+1];
            list[i+1]=middle;
            }
        

        }
    }
    for(int i =0;i<10;i++){
        printf("%d ",list[i]);
    }
}
