#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    
    int j = 0, u = 0;
    for (int i = 0; i < 256; i++) {
        if (s2[i] == '\0') {
            j = i - 1;
            if (s2[j] == s1[0]) {
                std::cout << "YES";
                return 0;
            }
            if (s2[j] != s1[0]) {
                for (int t = 0; t != 256; t++) {
                    if (s1[t] == '\0') {
                        u = t - 1;
                        if (s2[0] == s1[u]) {
                            std::cout << "YES";
                            return 0;
                        }
                        if (s2[0] != s1[u]) {
                            std::cout << "NO";
                            return 0;
                        }
                    }
                }
            }
        }
    }
}
