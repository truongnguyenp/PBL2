#include "BENHNHAN.h"
class NGOAITRU : public BENHNHAN {
    wstring ngayKham, soBHYT, maToa;
public:
    NGOAITRU();
    ~NGOAITRU();
    wstring layNK();
    wstring layso();
    wstring layMT();
    void nhap(const wstring&);
    void nhapfile(wifstream&, const wstring&);
    void capnhat(int, const wstring & = L"");
    friend wostream& operator<<(wostream&, NGOAITRU);
    friend wofstream& operator<<(wofstream&, NGOAITRU);
};
