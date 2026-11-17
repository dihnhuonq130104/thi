#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string ma, hoTen;
    double diemTrungBinh{};

public:
    void nhap() {
        cout << "Nhap ma sinh vien: ";
        cin >> ma;
        cin.ignore();
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);
        cout << "Nhap diem trung binh: ";
        cin >> diemTrungBinh;
    }

    void xuat() const {
        cout << "Ma: " << ma << "\nHo ten: " << hoTen
             << "\nDiem trung binh: " << diemTrungBinh << '\n';
    }

    double getDiemTrungBinh() const { return diemTrungBinh; }
};

class SinhVienCNTT {
private:
    SinhVien sinhVien;
    int soTinChi{};

public:
    void nhap() {
        sinhVien.nhap();
        cout << "Nhap so tin chi da hoc: ";
        cin >> soTinChi;
    }

    double diemTichLuy() const {
        return sinhVien.getDiemTrungBinh() * soTinChi;
    }

    string xetHocBong() const {
        return diemTichLuy() >= 120 ? "Duoc hoc bong"
                                    : "Khong duoc hoc bong";
    }

    void xuat() const {
        sinhVien.xuat();
        cout << "So tin chi: " << soTinChi
             << "\nDiem tich luy: " << diemTichLuy()
             << "\nKet qua: " << xetHocBong() << '\n';
    }
};

int main() {
    SinhVienCNTT sinhVien;
    sinhVien.nhap();
    sinhVien.xuat();
    return 0;
}
