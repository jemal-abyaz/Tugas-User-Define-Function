#include <iostream>
#include <cmath>    
using namespace std;

const double PI = 3.1416;

// Fungsi untuk menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Fungsi untuk menghitung radius lingkaran
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

// Fungsi untuk menghitung keliling lingkaran
double circumference(double r) {
    return 2 * PI * r;
}

// Fungsi untuk menghitung luas lingkaran
double area(double r) {
    return PI * pow(r, 2);
}

int main() {
    double x1, y1, x2, y2;

    cout << "Masukkan koordinat pusat lingkaran (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Masukkan koordinat titik pada lingkaran (x2 y2): ";
    cin >> x2 >> y2;

    double r = radius(x1, y1, x2, y2);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    cout << "\n=== Hasil Perhitungan Lingkaran ===" << endl;
    cout << "Radius          : " << r << endl;
    cout << "Diameter        : " << d << endl;
    cout << "Keliling        : " << c << endl;
    cout << "Luas            : " << a << endl;

    return 0;
}
