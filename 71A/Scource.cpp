// TIME: 31ms
// MEMORY USAGE: 3600kb

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {

    string str;
    string full_str;
    int count;
    int string_length;

    // Decide how many times to loop
    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> str;
        string_length = str.length();

        if (string_length > 10) {
            // first_chararcter + string_length-2 + last_character
            str = str[0] + to_string(string_length-2) + str[string_length-1];
        }

        full_str += '\n' + str;
    }
    cout << full_str << endl;

    return 0;
}
