#include "BENHNHAN.h"
#include "conio.h"
#include <fstream>
#include <iostream>
using namespace std;
BENHNHAN::BENHNHAN() {

}
BENHNHAN::~BENHNHAN() {

}
bool kiemtraNS(const wstring& s) {
    if (s.length() != 10)  return 1;
    if (s[2] != L'/' || s[5] != L'/') return 1;
    for (int i = 0; i < 10; i++) {
        if (i == 2 || i == 5) continue;
        if (s[i] - 48 < 0 || s[i] - 48 > 9) return 1;
    }
    return 0;
}
wstring BENHNHAN::layma() {
    return this->maHS;
}
wstring BENHNHAN::layHT() {
    return this->hoTen;
}
wstring BENHNHAN::layNS() {
    return this->ngaySinh;
}
wstring BENHNHAN::layCD() {
    return this->chuanDoan;
}
wstring BENHNHAN::dinhdang(const wstring& s, long long i) {
    long long j = s.length(), k = (i - j) / 2;
    wstring a = L" ", b = L" ";
    for (long long h = 1; h < k; h++) {
        a += b;
    }b = a;
    if (i - j - k > k) b += L" ";
    a += s + b;
    return a;
}
void BENHNHAN::nhap(const wstring& maHS) {
    this->maHS = maHS;
    wcout << L"   + Họ tên:            "; getline(wcin, this->hoTen);
    wcout << L"   + Ngày sinh:         "; getline(wcin, this->ngaySinh);
    while (kiemtraNS(this->ngaySinh)) {
        wcout << L"Hãy nhập một ngày sinh có dạng dd/mm/yyyy! (Ví dụ: 18/03/1990)" << endl;
        wcout << L"   + Ngày sinh:         "; getline(wcin, this->ngaySinh);
    }
    wcout << L"   + Chuẩn đoán bệnh:   "; getline(wcin, this->chuanDoan);
}
void BENHNHAN::nhapfile(wifstream& file, const wstring& maHS) {
    this->maHS = maHS;
    getline(file, this->hoTen, L'\t');
    getline(file, this->ngaySinh, L'\t');
    if (kiemtraNS(this->ngaySinh)) {
        wcout << L"Bệnh nhân có mã hồ sơ " + maHS + L" có ngày sinh không hợp lệ (không có dạng dd/mm/yyyy)! Ngày sinh của bệnh nhân này sẽ được mặc định thành 01/01/2000!" << endl;
        this->ngaySinh = L"01/01/2000";
    }
    getline(file, this->chuanDoan, L'\t');
}
void BENHNHAN::capnhat(int chon, const wstring& s) {
    wstring s1;
    switch (chon) {
    case 0: {
        if (s[0] != L'\0') this->maHS = s;
        break;
    }
    case 1: {
        wcout << L"   + Họ tên mới:            ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->hoTen = s1;
        break;
    }
    case 2: {
        wcout << L"   + Ngày sinh mới:         ";
        getline(wcin, s1);
        while (s1[0] != L'\0' && kiemtraNS(s1)) {
            wcout << L"Hãy nhập một ngày sinh có dạng dd/mm/yyyy! (Ví dụ: 18/03/1990)" << endl;
            wcout << L"   + Ngày sinh mới:         "; getline(wcin, s1);
        }
        this->ngaySinh = s1;
        break;
    }
    case 3: {
        wcout << L"   + Chuẩn đoán bệnh mới:   ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->chuanDoan = s1;
        break;
    }
    case 4: {
        if (s[0] != L'\0') this->maHS = s;
        wcout << L"   + Họ tên mới:            ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->hoTen = s1;
        wcout << L"   + Ngày sinh mới:         ";
        getline(wcin, s1);
        while (s1[0] != L'\0' && kiemtraNS(s1)) {
            wcout << L"Hãy nhập một ngày sinh có dạng dd/mm/yyyy! (Ví dụ: 18/03/1990)" << endl;
            wcout << L"   + Ngày sinh mới:         "; getline(wcin, s1);
        }
        this->ngaySinh = s1;
        wcout << L"   + Chuẩn đoán bệnh mới:   ";
        getline(wcin, s1);
        if (s1[0] != L'\0')this->chuanDoan = s1;
        break;
    }
    }
}

