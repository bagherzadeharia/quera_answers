#include<iostream>
using namespace std;

int main(){
    int x,n;
    cin >> x;
    cin >> n;
    if(n==0){
        cout << "20";
        return 0;
    }else if(n==7){
        cout << x;
        return 0;
    }
    x=x-n;
    if(x>0){
        cout << x;
    }
    else{
        x=0; // Case x > 0
        cout << x;
    }
}
