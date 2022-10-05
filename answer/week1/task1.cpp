#include <iostream>

int main()
{
    std::cout << 4 - 3 - 2 + 1 << "\n"; // 0
    std::cout << 2 * 3 - 1 - 4 << "\n"; // 1
    std::cout << 4 - 3 + 2 - 1 << "\n"; // 2
    std::cout << (4 - 3 + 2) * 1 << "\n"; // 3
    std::cout << 2 * 4 - (3 + 1) << "\n"; // 4
    std::cout << 4 * 2 - 3 * 1 << "\n"; // 5
    std::cout << 4 * 2 - 3 + 1 << "\n"; // 6
    std::cout << 4 + 3 + 1 / 2 << "\n"; // 7
    std::cout << 4 + 3 + 2 - 1 << "\n"; // 8
    std::cout << 4 + 3 + 2 * 1 << "\n"; // 9
    std::cout << 4 + 3 + 2 + 1 << "\n"; // 10
}