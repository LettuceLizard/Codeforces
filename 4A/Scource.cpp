// TIME: 62ms
// MEMORY USAGE: 3700kb

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int w;

    cin >> w;

    if (w%2 == 0 and w != 2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
