#include "CHUYENVIEN.h"
#include <iostream>
using namespace std;
CHUYENVIEN::CHUYENVIEN() {
}
CHUYENVIEN::~CHUYENVIEN() {

}
wstring CHUYENVIEN::layNgC() {
    return this->ngayCh;
}
wstring CHUYENVIEN::layNC() {
    return this->noiCh;
}
void CHUYENVIEN::nhap(const wstring& s) {
    BENHNHAN::nhap(s);
    wcout << L"   + Ngày chuyển:       "; getline(wcin, this->ngayCh);
    wcout << L"   + Nơi chuyển:        "; getline(wcin, this->noiCh);
    wcout << L"Đã lưu thông tin của bệnh nhân!" << endl;
}
void CHUYENVIEN::nhapfile(wifstream& file, const wstring& s) {
    BENHNHAN::nhapfile(file, s);
    getline(file, this->ngayCh, L'\t');
    getline(file, this->noiCh, L'\n');
}
void CHUYENVIEN::capnhat(int chon, const wstring& s) {
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
        wcout << L"   + Ngày chuyển mới:       ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->ngayCh = s1;
        break;
    }
    case 5: {
        wcout << L"   + Nơi chuyển mới:        ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->noiCh = s1;
        break;
    }
    case 6: {
        BENHNHAN::capnhat(4, s);
        wcout << L"   + Ngày chuyển mới:       "; getline(wcin, this->ngayCh);
        getline(wcin, s1);
        if (s1[0] != L'\0')this->ngayCh = s1;
        wcout << L"   + Nơi chuyển mới:        "; getline(wcin, this->noiCh);
        getline(wcin, s1);
        if (s1[0] != L'\0')this->noiCh = s1;
        break;
    }
    }
    wcout << L"Đã lưu thông tin của bệnh nhân!" << endl;
}
wostream& operator<<(wostream& o, CHUYENVIEN x) {
    o << L"├────────────┼──────────────────────────────────────┼─────────────────┼──────────────────────────┼───────────────┼──────────────────────────────────────┤\n";
    o << L"│ " << x.dinhdang(x.maHS, 10) << L" │ " << x.dinhdang(x.hoTen, 36) << L" │ " << x.dinhdang(x.ngaySinh, 15) << L" │ " << x.dinhdang(x.chuanDoan, 24) << L" │ " << x.dinhdang(x.ngayCh, 13) << L" │ " << x.dinhdang(x.noiCh, 36) << L" │" << endl;
    return o;
}
wofstream& operator<<(wofstream& o, CHUYENVIEN x) {
    o << L"├────────────┼──────────────────────────────────────┼─────────────────┼──────────────────────────┼───────────────┼──────────────────────────────────────┤\n";
    o << L"│ " << x.dinhdang(x.maHS, 10) << L" │ " << x.dinhdang(x.hoTen, 36) << L" │ " << x.dinhdang(x.ngaySinh, 15) << L" │ " << x.dinhdang(x.chuanDoan, 24) << L" │ " << x.dinhdang(x.ngayCh, 13) << L" │ " << x.dinhdang(x.noiCh, 36) << L" │" << endl;
    return o;
}
