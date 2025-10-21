//202510414210
//493758308@qq.com
//周博渊
#include <stdio.h>

int main(){
    int a,b;
    char q;
    scanf("%d %d %c",&a,&b,&q);
    if (q=='+'){
        printf("%d",a+b);
    }else if(q=='-'){
        printf("%d",a-b);
    }
    else if(q=='*'){
        printf("%d",a*b);
    }
    else if(q=='/'){
        printf("%d",a/b);
    }
    else{
        printf("Worring");
    }
    return 0;
}
