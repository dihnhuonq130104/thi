#include <iostream>
using namespace std;

class HINHTRON {
private:
    double banKinh{};
    static constexpr double PI = 3.14159265358979323846;

public:
    void nhap() {
        cout << "Nhap ban kinh: ";
        cin >> banKinh;
    }

    void xuat() const { cout << "Ban kinh: " << banKinh << '\n'; }
    double chuVi() const { return 2 * PI * banKinh; }
    double dienTich() const { return PI * banKinh * banKinh; }
};

int main() {
    HINHTRON hinhTron;
    hinhTron.nhap();
    hinhTron.xuat();
    cout << "Chu vi = " << hinhTron.chuVi() << '\n';
    cout << "Dien tich = " << hinhTron.dienTich() << '\n';
    return 0;
}
