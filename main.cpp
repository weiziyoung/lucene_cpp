#include <iostream>

int main() {
    int a = 65534;
    std::cout << int(char(a & 0xff))  << std::endl;
    return 0;
}
