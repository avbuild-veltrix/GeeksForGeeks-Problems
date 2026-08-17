#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double p, r, t;
    cin >> p >> r >> t;

    double SI = (p * r * t) / 100.0;

    cout << fixed << setprecision(2) << SI;

    return 0;
}