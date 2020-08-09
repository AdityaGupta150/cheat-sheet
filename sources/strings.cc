#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    /* C++ String */
    string a;
    cin >> a;
    cout << "[C++] You have input \"" << a << "\", "
         << ", whose length is " << a.length() << endl;

    char b[10];
    fgets(b, 10, stdin);
    cout << "[C] You have input \"" << b << "\", "
         << ", whose length is " << strlen(b) << endl;

    return 0;
}