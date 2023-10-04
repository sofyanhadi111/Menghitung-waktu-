#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;



int main() {
    double s;
    double v;
    double sinA;
    double waktu;

    cin >> s;
    cin >> v;
    sinA = sin(s * 22 / 7 / 180) / 10;
    waktu = 2 * (v * sinA);
    cout << fixed << setprecision(3) << waktu;
    return 0;
}


