#include <iostream>
using namespace std;

int main(){
    int gun[4],ema[4],gSum = 0,eSum = 0,temp;
    cin >> gun[0] >> gun[1] >> gun[2] >> gun[3];
    cin >> ema[0] >> ema[1] >> ema[2] >> ema[3];
    for (int i = 0; i < 4; i++) {
        gSum+=gun[i];
        eSum+=ema[i];
    }
    if (gSum > eSum) {
        cout << "Gunnar" << endl;
    }
    else if (gSum < eSum) {
        cout << "Emma" << endl;
    }
    else {
        cout << "Tie" << endl;
    }
    return 0;
}
