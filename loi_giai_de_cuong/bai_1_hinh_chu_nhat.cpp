#include <iostream>
using namespace std;

class HCN {
private:
    double dai{}, rong{};

public:
    void nhap() {
        cout << "Nhap chieu dai: ";
        cin >> dai;
        cout << "Nhap chieu rong: ";
        cin >> rong;
    }

    void xuat() const {
        cout << "Chieu dai: " << dai << "\nChieu rong: " << rong << '\n';
    }

    double chuVi() const { return 2 * (dai + rong); }
    double dienTich() const { return dai * rong; }
};

int main() {
    HCN hcn;
    hcn.nhap();
    hcn.xuat();
    cout << "Chu vi = " << hcn.chuVi() << '\n';
    cout << "Dien tich = " << hcn.dienTich() << '\n';
    return 0;
}
