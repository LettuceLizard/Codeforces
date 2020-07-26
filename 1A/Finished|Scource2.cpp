// TIME: 31ms
// MEMORY USAGE: 3600kb

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

    // round_up_number(unpaved_road_length/square_length) * --||--
    k = ceil(m/a)*ceil(n/a);

    cout << k << endl;

    return 0;
}
