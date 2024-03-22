#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char n[6],a[6];
    scanf("%s",&n);
    a[0]=n[4];
    a[1]=n[3];
    a[2]=n[2];
    a[3]=n[1];
    a[4]=n[0];
    printf("%s",a);
}
