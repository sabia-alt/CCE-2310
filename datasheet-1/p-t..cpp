#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = a, y = b, z = c;

    // Sort the copy
    int arr[3] = {x, y, z};
    sort(arr, arr + 3);

    // Print sorted numbers
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }

    cout << endl;

    // Print original order
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
