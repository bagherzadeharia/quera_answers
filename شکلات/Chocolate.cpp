#include <iostream>

int main() {
    int n, k;
    std::cin >> n;
    std::cin >> k;
    if (n % k == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}
