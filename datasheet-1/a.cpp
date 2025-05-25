#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double X, P;
    cin >> X >> P;

    double original_price = (P * 100) / (100 - X);

    // Print the result rounded to 2 decimal places
    cout << fixed << setprecision(2) << original_price << endl;

    return 0;
}
