#include "NGOAITRU.h"
#include <iostream>
using namespace std;
NGOAITRU::NGOAITRU() {
}
NGOAITRU::~NGOAITRU() {

}
wstring NGOAITRU::layNK() {
    return this->ngayKham;
}
wstring NGOAITRU::layso() {
    return this->soBHYT;
}
wstring NGOAITRU::layMT() {
    return this->maToa;
}
void NGOAITRU::nhap(const wstring& s) {
    BENHNHAN::nhap(s);
    wcout << L"   + Ngày khám:         "; getline(wcin, this->ngayKham);
    wcout << L"   + Số BHYT:           "; getline(wcin, this->soBHYT);
    wcout << L"   + Mã toa:            "; getline(wcin, this->maToa);
    wcout << L"Đã lưu thông tin của bệnh nhân!" << endl;
}
void NGOAITRU::nhapfile(wifstream& file, const wstring& s) {
    BENHNHAN::nhapfile(file, s);
    getline(file, this->ngayKham, L'\t');
    getline(file, this->soBHYT, L'\t');
    getline(file, this->maToa, L'\n');
}
void NGOAITRU::capnhat(int chon, const wstring& s) {
    wstring s1;
    switch (chon) {
    case 0: {
        BENHNHAN::capnhat(chon, s);
        break;
    }
    case 1:
    case 2:
    case 3: BENHNHAN::capnhat(chon); break;
    case 4: {
        wcout << L"   + Ngày khám mới:         ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->ngayKham = s1;
        break;
    }
    case 5: {
        wcout << L"   + Số BHYT mới:           ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->soBHYT = s1;
        break;
    }
    case 6: {
        wcout << L"   + Mã toa mới:            ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->maToa = s1;
        break;
    }
    case 7: {
        BENHNHAN::capnhat(4, s);
        wcout << L"   + Ngày khám mới:         ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->ngayKham = s1;
        wcout << L"   + Số BHYT mới:           ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->soBHYT = s1;
        wcout << L"   + Mã toa mới:            ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->maToa = s1;
        break;
    }
    }
    wcout << L"Đã cập nhật thông tin của bệnh nhân!" << endl;
}
wostream& operator<<(wostream& o, NGOAITRU x) {
    o << L"├────────────┼──────────────────────────────────────┼─────────────────┼──────────────────────────┼───────────────┼──────────────────┼──────────────┤\n";
    o << L"│ " << x.dinhdang(x.maHS, 10) << L" │ " << x.dinhdang(x.hoTen, 36) << L" │ " << x.dinhdang(x.ngaySinh, 15) << L" │ " << x.dinhdang(x.chuanDoan, 24) << L" │ " << x.dinhdang(x.ngayKham, 13) << L" │ " << x.dinhdang(x.soBHYT, 16) << L" │ " << x.dinhdang(x.maToa, 12) << L" │" << endl;
    return o;
}
wofstream& operator<<(wofstream& o, NGOAITRU x) {
    o << L"├────────────┼──────────────────────────────────────┼─────────────────┼──────────────────────────┼───────────────┼──────────────────┼──────────────┤\n";
    o << L"│ " << x.dinhdang(x.maHS, 10) << L" │ " << x.dinhdang(x.hoTen, 36) << L" │ " << x.dinhdang(x.ngaySinh, 15) << L" │ " << x.dinhdang(x.chuanDoan, 24) << L" │ " << x.dinhdang(x.ngayKham, 13) << L" │ " << x.dinhdang(x.soBHYT, 16) << L" │ " << x.dinhdang(x.maToa, 12) << L" │" << endl;
    return o;
}

