// missförstod uppgiften, Om programmet kan radera charactärer så det blir "hello" så ska output bli YES
// DÅLIGT | läste nt uppgiften tillräckligt | borde använda CAPS för constanter | tänkte nt genom designen tillräckligt

#include <iostream>
#include <string>


int main(int argc, char const *argv[]) {

    std::string s;
    std::string hello = "hello";

    int character = 0;

    std::cin >> s;

    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == hello[character]){
                character += 1;
                std::cout << "completed" << '\n';
            } if (s[i] == hello[character-1]) {
                if (character >= 5) {
                    break;
                }
            }
            else {
                character = 0;
                std::cout << "reset" << '\n';
            }
        }

    if (character >= 5) {
        std::cout << "YES" << '\n';
    }else {
        std::cout << "NO" << '\n';
    }

    return 0;
}
