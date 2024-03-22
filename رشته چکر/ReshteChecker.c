#include<stdio.h>

int main(){
	char s1[256], s2[256];
	gets(s1);
	gets(s2);
	int i,j=0,t,u=0;
	for(i=0;i<256;i++){
		if(s2[i]=='\0'){
			j=i-1;
			if(s2[j]==s1[0]){
				printf("YES"); return 0;
			}
			if(s2[j]!=s1[0]){
				for(t=0;t!=256;t++){
					if(s1[t]=='\0'){
						u=t-1;
						if(s2[0]==s1[u]){
							printf("YES"); return 0;
						}
						if(s2[0]!=s1[u]){
							printf("NO"); return 0;
						}
					}
				}
			}
		}
	}
}
