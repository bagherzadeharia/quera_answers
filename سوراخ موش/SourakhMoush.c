#include<stdio.h>

int main(){
	int x,y,r=0,l=0;
	scanf("%d",&x);
	scanf("%d",&y);
	if(x==y){
		printf("Saal Noo Mobarak!");
	}else if(x>y){
		while(x!=y){
			x--; l++; printf("L");
		}
	}else{
		while(x!=y){
			x++; r++; printf("R");
		}
	}
	return 0;
}
