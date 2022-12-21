#include "BENHNHAN.h"
class NOITRU : public BENHNHAN {
    wstring ngayNV, ngayRV;
    wstring khoa, soGiuong;
public:
    NOITRU();
    ~NOITRU();
    wstring layNV();
    wstring layRV();
    wstring layK();
    wstring laySG();
    void nhap(const wstring&);
    void nhapfile(wifstream&, const wstring&);
    void capnhat(int, const wstring & = L"");
    friend wostream& operator<<(wostream&, NOITRU);
    friend wofstream& operator<<(wofstream&, NOITRU);
};
