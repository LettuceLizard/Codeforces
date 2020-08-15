// TIME: ms
// MEMORY USAGE: kb

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {

    string str;
    int loop_count, string_length, i;

    // Decide how many times to loop
    cin >> loop_count;

    for (i = 0; i < loop_count; i++) {
        cin >> str;
        string_length = str.length();

        if (string_length <= 10) cout << str;
        else cout << str[0] << string_length-2 << str[string_length-1];
        cout << endl;
    }

    return 0;
}
