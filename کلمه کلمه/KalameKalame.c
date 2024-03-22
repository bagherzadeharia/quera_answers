#include<stdio.h>

int main(){
	int i,s=0,p=1;
	char word[7];
	scanf("%s",&word);
	for(i=0;word[i]!='\0';i++){
		if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
			s++;
			}
		}
	for(i=0;i<s;i++){
		p=p*2;
		}
		printf("%d",p);
	return 0;
}
