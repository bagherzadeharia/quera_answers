#include <iostream>

int main() {
    int x, y, r = 0, l = 0;
    std::cin >> x;
    std::cin >> y;
    if (x == y) {
        std::cout << "Saal Noo Mobarak!" << std::endl;
    } else if (x > y) {
        while (x != y) {
            x--;
            l++;
            std::cout << "L" << std::endl;
        }
    } else {
        while (x != y) {
            x++;
            r++;
            std::cout << "R" << std::endl;
        }
    }
    return 0;
}
