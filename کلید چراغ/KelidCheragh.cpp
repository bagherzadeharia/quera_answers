#include<iostream>
using namespace std;

int main(){
    int n,i,t=0,s=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    t=arr[0];
    for(i=1;i<n;i++){
        if(t!=arr[i]){
            s++;
            t=arr[i];
        }
    }
    cout << s;
}
