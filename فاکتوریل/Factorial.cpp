#include<iostream>
using namespace std;

void factOf(int n){
	int i;
	cin >> n;
	int ans = 1;
  if(n>1){
    for(int i=2;i<=n;i++){
      ans = ans * i;
    }
  }
  cout << ans;
}

int main(){
	int n;
	factOf(n);
	return 0;
}
