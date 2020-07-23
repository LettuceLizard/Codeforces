#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    bool searching = true;

    int m, n, a;
    int rect, square;
    int combinations = 1;
    int increment = 1;

    cin >> m;
    cin >> n;
    cin >> a;

    rect = m*n;
    square = a*a;



    while (searching) {
        if (combinations*square >= rect) {
            cout << combinations << '\n';
            searching = false;
        }
        else {
            increment += 2;
            combinations += increment;
        }
    }


    return 0;
}
