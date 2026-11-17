#include <cmath>
#include <iostream>
using namespace std;

class PTB2 {
private:
    double a, b, c;

public:
    PTB2() : a(0), b(0), c(0) {}
    PTB2(double a, double b, double c) : a(a), b(b), c(c) {}

    void nhap() {
        cout << "Nhap a, b, c trong ax^2 + bx + c = 0: ";
        cin >> a >> b >> c;
    }

    void giai() const {
        if (a == 0) {
            if (b == 0)
                cout << (c == 0 ? "Vo so nghiem.\n" : "Vo nghiem.\n");
            else
                cout << "Day la phuong trinh bac nhat, x = " << -c / b << '\n';
            return;
        }

        double delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << "Phuong trinh vo nghiem thuc.\n";
        else if (delta == 0)
            cout << "Nghiem kep x = " << -b / (2 * a) << '\n';
        else {
            cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << '\n';
            cout << "x2 = " << (-b - sqrt(delta)) / (2 * a) << '\n';
        }
    }
};

int main() {
    PTB2 phuongTrinh;
    phuongTrinh.nhap();
    phuongTrinh.giai();
    return 0;
}
