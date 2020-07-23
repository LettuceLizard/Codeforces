#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {

    int m, n;
    double a;
    unsigned long long int k;

    cin >> m;
    cin >> n;
    cin >> a;

    // Divides then ronds up value
    k = ceil(m/a)*ceil(n/a);

    cout << k << endl;

    return 0;
}
