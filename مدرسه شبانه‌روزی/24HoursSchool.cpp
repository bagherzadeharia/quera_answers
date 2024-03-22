#include<iostream>
using namespace std;

int main(){
    int i,j,n,ans=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=2;;i++){
        for(j=0;j<n;j++){
            if(i%arr[j]!=0){
                break;
            }
            if(i%arr[j]==0 && j==(n-1)){
                ans+=i;
                ans=ans%30;
                cout << ans;
                return 0;
            }
        }
    }
}
