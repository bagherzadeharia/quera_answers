#include<stdio.h>

int main(){
    int x,n;
    scanf("%d",&x);
    scanf("%d",&n);
    if(n==0){printf("20"); return 0;}
    if(n==7){printf("%d",x); return 0;}
    x=x-n;
    if(x>0){
        printf("%d",x);
    }
    else{
        x=0; printf("%d",x);
    }
}
