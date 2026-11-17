#include <iostream>
#include <string>
using namespace std;

class NhanVien {
private:
    string ma, hoTen;
    double heSoLuong{};

public:
    void nhap() {
        cout << "Nhap ma nhan vien: ";
        cin >> ma;
        cin.ignore();
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);
        cout << "Nhap he so luong: ";
        cin >> heSoLuong;
    }

    void xuat() const {
        cout << "Ma: " << ma << "\nHo ten: " << hoTen
             << "\nHe so luong: " << heSoLuong
             << "\nLuong co ban: " << luongCoBan() << '\n';
    }

    double luongCoBan() const { return heSoLuong * 1500000; }
};

class NhanVienKyThuat {
private:
    NhanVien nhanVien;
    int soNamKinhNghiem{};

public:
    void nhap() {
        nhanVien.nhap();
        cout << "Nhap so nam kinh nghiem: ";
        cin >> soNamKinhNghiem;
    }

    double luongThucNhan() const {
        return nhanVien.luongCoBan() + soNamKinhNghiem * 200000;
    }

    void xuat() const {
        nhanVien.xuat();
        cout << "So nam kinh nghiem: " << soNamKinhNghiem
             << "\nLuong thuc nhan: " << luongThucNhan() << '\n';
    }
};

int main() {
    NhanVienKyThuat nhanVien;
    nhanVien.nhap();
    nhanVien.xuat();
    return 0;
}
