#include<iostream>
using namespace std;

struct hard{
    int data,times=0;
};


int main(){
    int i,t,T=0;
    cin >> t;
    struct hard hard[t];
    for(i=0;i<t;i++){
        cin >> hard[i].data;
    }
    for(i=0;i<t;i++){
        T++;
        while(hard[i].data>1023){
            hard[i].data=hard[i].data/1024;
            hard[i].times++;
        }
        cout << hard[i].data;
        if(hard[i].times==0){
            cout << "B";
        }
        if(hard[i].times==1){
            cout << "KiB";
        }
        if(hard[i].times==2){
            cout << "MiB";
        }
        if(T<t){
            cout << "\n";
        }
    }
}
