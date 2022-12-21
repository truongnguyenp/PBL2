#include "BENHNHAN.h"
class CHUYENVIEN : public BENHNHAN {
    wstring ngayCh, noiCh;
public:
    CHUYENVIEN();
    ~CHUYENVIEN();
    wstring layNgC();
    wstring layNC();
    void nhap(const wstring&);
    void nhapfile(wifstream&, const wstring&);
    void capnhat(int, const wstring & = L"");
    friend wostream& operator<<(wostream&, CHUYENVIEN);
    friend wofstream& operator<<(wofstream&, CHUYENVIEN);
};
