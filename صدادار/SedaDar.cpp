#include<iostream>
using namespace std;

int main(){
    int i,count=0;
    char str[101];
    cin >> str;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    cout << count;
}
