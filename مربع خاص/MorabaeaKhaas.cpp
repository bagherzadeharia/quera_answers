#include <iostream>
using namespace std;

void squr(int n) {
    int border = 0;
    int half;
    half = n / 2;
    half++;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || i == j || i == (n - j + 1) || border > (n - j)) {
                cout << "#";
            } else {
                cout << " ";
            }
        }
        if (i != (n)){
            cout << endl;
        }
        if(i < half){
            border++;
        } else {
            border--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    squr(n);
    return 0;
}
