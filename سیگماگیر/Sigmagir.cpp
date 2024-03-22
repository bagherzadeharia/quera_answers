#include <iostream>
using namespace std;

int main(){
    long int n;
    cin >> n;
    long int m;
    cin >> m;
    long int sum = 0;
    for (int i= -10; i <= m; i++) {
       for (int j = 1; j <= n; j++) {
           int x = i + j;
           sum += x * x * x / j / j;
       }
    }
    cout << sum;
    return 0;
}
