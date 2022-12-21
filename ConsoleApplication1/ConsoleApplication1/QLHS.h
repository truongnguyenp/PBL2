#include "NOITRU.h"
#include "NGOAITRU.h"
#include "CHUYENVIEN.h"
#include "List.cpp"
class QLHS {
	List<NOITRU> nt;
	List<NGOAITRU> ngt;
	List<CHUYENVIEN> cv;
public:
	QLHS();
	~QLHS();
	void nhap(int, int);
	void chen(int);
	void nhapfile(int, int);
	void capnhat(int, int, const wstring&);
	void tim(const wstring&, int, int);
	void sapxep(int, int, int);
	void tinh(wstring&, int);
	void xoa(const wstring&, int, int);
	void xoasach(int);
	void xuat(int);
	void xuatfile(int);
};
