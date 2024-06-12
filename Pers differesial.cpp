#include <iostream>
#include <cmath>
using namespace std;

// fungsi persamaan
double f(double x, double y) {
    // Ini cuma fungsi contoh, gatau cara buat supaya bisa input persamaannya co
    return y - pow(x, 2) + 1;
}

// fungsi rungge kutta
void rungeKutta(double x0, double y0, double x, double h) {
    int n = (int)((x - x0) / h);
    double k0, k1, k2, k3;

    double y = y0;
    for (int i = 1; i <= n; i++) {
        // ini rumusnya yak
        k0 = h * f(x0, y);
        k1 = h * f(x0 + 0.5 * h, y + 0.5 * k0);
        k2 = h * f(x0 + 0.5 * h, y + 0.5 * k1);
        k3 = h * f(x0 + h, y + k2);

        // Update y nya
        y = y + (1.0 / 6.0) * (k0 + 2 * k1 + 2 * k2 + k3);

        // Update x nya
        x0 = x0 + h;
    } //ni tar looping dari x0 sampe x yang ditentuin, banyak iterasinya tergantung h

    cout << "Nilai y pada x = " << x << " adalah : " << y << std::endl;
}

int main() {
    double x0 = 1, y = 1, x, h;

    cout << "Masukkan h = ";
    cin >> h;
    cout << "Masukkan x = ";
    cin >> x;

    rungeKutta(x0, y, x, h); // call fungsi runge kutta
    return 0;
}
