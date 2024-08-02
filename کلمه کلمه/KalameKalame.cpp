#include <iostream>
#include <string>

int main() {
    int s = 0, p = 1;
    std::string word;
    std::cin >> word;
    
    for (char c : word) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            s++;
        }
    }
    
    for (int i = 0; i < s; i++) {
        p = p * 2;
    }
    
    std::cout << p;
    return 0;
}

