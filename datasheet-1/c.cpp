#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    // If c is 'z', wrap around to 'a'
    if (c == 'z')
        cout << 'a' << endl;
    else
        cout << char(c + 1) << endl;

    return 0;
}
