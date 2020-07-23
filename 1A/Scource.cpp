#include <iostream>

int main(int argc, char const *argv[]) {

    int n, m, a;

    std::cin >> n;
    std::cin >> m;
    std::cin >> a;


    if (n == 1 and m == 1) {
        std::cout << 1 << '\n';
    } else if (n%a == 0 or m%a == 0) {
        std::cout << n/a+m/a << '\n';
    } else {
        std::cout << n/a+m/a+2 << '\n';
    }

    return 0;
}
