#ifndef _BENHNHAN_H_
#define _BENHNHAN_H_
#include <io.h>
#include <fcntl.h>
#include <string>
#include <iostream>
#include <locale>
#include <codecvt>
#include <fstream>
#include <Windows.h>
#include <conio.h>
using namespace std;
class BENHNHAN {// thuộc tính + phương thức
protected:
    wstring maHS, hoTen, ngaySinh;
    wstring chuanDoan;
public:
    BENHNHAN(); // Hàm khởi tạo
    ~BENHNHAN();// Hàm hủy
    wstring layma();
    wstring layHT();
    wstring layNS();
    wstring layCD();
    virtual void nhap(const wstring&) = 0;
    virtual void nhapfile(wifstream&, const wstring&) = 0;
    virtual void capnhat(int, const wstring & = L"") = 0;
    wstring dinhdang(const wstring&, long long);
};
#endif
