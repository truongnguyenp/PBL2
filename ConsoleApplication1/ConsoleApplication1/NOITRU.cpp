#include "NOITRU.h"
#include <iostream>
using namespace std;
NOITRU::NOITRU() {
}
NOITRU::~NOITRU() {

}
bool kiemtra(const wstring& s) {
    if (s.length() == 0)return 1;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] - 48 < 0 || s[i] - 48 > 9) return 1;
    }
    return 0;
}
wstring NOITRU::layNV() {
    return this->ngayNV;
}
wstring NOITRU::layRV() {
    return this->ngayRV;
}
wstring NOITRU::layK() {
    return this->khoa;
}
wstring NOITRU::laySG() {
    return this->soGiuong;
}
void NOITRU::nhap(const wstring& s) {
    BENHNHAN::nhap(s);
    wcout << L"   + Ngày nhập viện:    "; getline(wcin, this->ngayNV);
    wcout << L"   + Ngày ra viện:      "; getline(wcin, this->ngayRV);
    wcout << L"   + Khoa:              "; getline(wcin, this->khoa);
    wcout << L"   + Số giường:         "; getline(wcin, this->soGiuong);
    while (kiemtra(this->soGiuong)) {
        wcout << L"Bệnh nhân có mã hồ sơ " + layma() + L" có số giường không hợp lệ! Số giường phải có dạng số!" << endl;
        wcout << L"   + Số giường:         "; getline(wcin, this->soGiuong);
    }
    wcout << L"Đã lưu thông tin của bệnh nhân!" << endl;
}
void NOITRU::nhapfile(wifstream& file, const wstring& s) {
    BENHNHAN::nhapfile(file, s);
    getline(file, this->ngayNV, L'\t');
    getline(file, this->ngayRV, L'\t');
    getline(file, this->khoa, L'\t');
    getline(file, this->soGiuong, L'\n');
    if (kiemtra(this->soGiuong)) {
        wcout << L"Bệnh nhân có mã hồ sơ " + layma() + L" có số giường không hợp lệ (số giường phải có dạng số)! Số giường sẽ được mặc định thành 1!" << endl;
        this->soGiuong = L"1";
        Sleep(1000);
    }
}
void NOITRU::capnhat(int chon, const wstring& s) {
    wstring s1;
    switch (chon) {
    case 0: {
        BENHNHAN::capnhat(chon, s);
        break;
    }
    case 1:
    case 2:
    case 3:BENHNHAN::capnhat(chon); break;
    case 4: {
        wcout << L"   + Ngày nhập viện mới:    ";
        getline(wcin, s1);
        if (s1[0] != L'\0') this->ngayNV = s1;
        break;
    }
    case 5: {
        wcout << L"   + Ngày ra viện mới:      ";
        getline(wcin, s1);
        if (s1[0] != L'\0') this->ngayRV = s1;
        break;
    }
    case 6: {
        wcout << L"   + Khoa mới:              ";
        getline(wcin, s1);
        if (s1[0] != L'\0') this->khoa = s1;
        break;
    }
    case 7: {
        wcout << L"   + Số giường mới:         ";
        getline(wcin, s1);
        while (s1[0] != L'\0' && kiemtra(s1)) {
            wcout << L"Bệnh nhân có mã hồ sơ " + layma() + L" có số giường không hợp lệ! Số giường phải có dạng số!" << endl;
            wcout << L"   + Số giường mới:         "; getline(wcin, s1);
        }
        this->soGiuong = s1;
        break;
    }
    case 8: {
        BENHNHAN::capnhat(4, s);
        wcout << L"   + Ngày nhập viện mới:    ";
        getline(wcin, s1);
        if (s1[0] != L'\0') this->ngayNV = s1;
        wcout << L"   + Ngày ra viện mới:      ";
        getline(wcin, s1);
        if (s1[0] != L'\0') this->ngayRV = s1;
        wcout << L"   + Khoa mới:              ";
        getline(wcin, s1);
        if (s1[0] != L'\0') this->khoa = s1;
        wcout << L"   + Số giường mới:         ";
        getline(wcin, s1);
        while (s1[0] != L'\0' && kiemtra(s1)) {
            wcout << L"Bệnh nhân có mã hồ sơ " + layma() + L" có số giường không hợp lệ! Số giường phải có dạng số!" << endl;
            wcout << L"   + Số giường mới:         "; getline(wcin, s1);
        }
        this->soGiuong = s1;
        break;
    }
    }
    wcout << L"Đã cập nhật thông tin của bệnh nhân!" << endl;
}
wostream& operator<<(wostream& o, NOITRU x) {
    o << L"├────────────┼──────────────────────────────────────┼─────────────────┼──────────────────────────┼────────────────┼──────────────┼────────────────────────────────────────┼───────────┤\n";
    o << L"│ " << x.dinhdang(x.maHS, 10) << L" │ " << x.dinhdang(x.hoTen, 36) << L" │ " << x.dinhdang(x.ngaySinh, 15) << L" │ " << x.dinhdang(x.chuanDoan, 24) << L" │ " << x.dinhdang(x.ngayNV, 14) << L" │ " << x.dinhdang(x.ngayRV, 12) << L" │ " << x.dinhdang(x.khoa, 38) << L" │ " << x.dinhdang(x.soGiuong, 9) << L" │" << endl;
    return o;
}
wofstream& operator<<(wofstream& o, NOITRU x) {
    o << L"├────────────┼──────────────────────────────────────┼─────────────────┼──────────────────────────┼────────────────┼──────────────┼────────────────────────────────────────┼───────────┤\n";
    o << L"│ " << x.dinhdang(x.maHS, 10) << L" │ " << x.dinhdang(x.hoTen, 36) << L" │ " << x.dinhdang(x.ngaySinh, 15) << L" │ " << x.dinhdang(x.chuanDoan, 24) << L" │ " << x.dinhdang(x.ngayNV, 14) << L" │ " << x.dinhdang(x.ngayRV, 12) << L" │ " << x.dinhdang(x.khoa, 38) << L" │ " << x.dinhdang(x.soGiuong, 9) << L" │" << endl;
    return o;
}
