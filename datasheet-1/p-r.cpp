#include <iostream>
using namespace std;

int main() {
    int totalDays;
    cin >> totalDays;

    int years = totalDays / 365;
    totalDays %= 365;

    int months = totalDays / 30;
    int days = totalDays % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
