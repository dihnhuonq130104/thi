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
    double diemLapTrinh{};

public:
    void nhap() {
        sinhVien.nhap();
        cout << "Nhap diem Lap trinh: ";
        cin >> diemLapTrinh;
    }

    double diemTongKet() const {
        return (sinhVien.getDiemTrungBinh() * 2 + diemLapTrinh) / 3;
    }

    string xepLoai() const {
        double diem = diemTongKet();
        if (diem >= 8) return "Gioi";
        if (diem >= 6.5) return "Kha";
        if (diem >= 5) return "Trung binh";
        if (diem >= 3.5) return "Yeu";
        return "Kem";
    }

    void xuat() const {
        sinhVien.xuat();
        cout << "Diem Lap trinh: " << diemLapTrinh
             << "\nDiem tong ket: " << diemTongKet()
             << "\nXep loai: " << xepLoai() << '\n';
    }
};

int main() {
    SinhVienCNTT sinhVien;
    sinhVien.nhap();
    sinhVien.xuat();
    return 0;
}
