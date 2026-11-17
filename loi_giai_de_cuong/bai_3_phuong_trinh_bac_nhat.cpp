#include <iostream>
using namespace std;

class PTB1 {
private:
    double a{}, b{};

public:
    void nhap() {
        cout << "Nhap a, b trong ax + b = 0: ";
        cin >> a >> b;
    }

    void xuat() const { cout << a << "x + " << b << " = 0\n"; }

    void giai() const {
        if (a == 0) {
            cout << (b == 0 ? "Phuong trinh vo so nghiem.\n"
                            : "Phuong trinh vo nghiem.\n");
        } else {
            cout << "Nghiem x = " << -b / a << '\n';
        }
    }
};

int main() {
    PTB1 phuongTrinh;
    phuongTrinh.nhap();
    phuongTrinh.xuat();
    phuongTrinh.giai();
    return 0;
}
