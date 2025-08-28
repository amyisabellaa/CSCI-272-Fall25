
#include <iostream>
using namespace std;
int secondsSince12(int hours, int minutes, int seconds) {
    if (hours == 12) {
        hours = 0;
    }
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    cout << "Enter first time (hh mm ss): ";
    cin >> h1 >> m1 >> s1;

    cout << "Enter second time (hh mm ss): ";
    cin >> h2 >> m2 >> s2;

    int t1 = secondsSince12(h1, m1, s1);
    int t2 = secondsSince12(h2, m2, s2);

    int difference = abs(t1 - t2);  // absolute value to avoid negative results

    cout << "Difference in seconds: " << difference << endl;

    return 0;
}