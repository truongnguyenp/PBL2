#include "QLHS.h"
wstring dinhdang(const wstring& s, long long i) {
	long long j = s.length(), k = (i - j) / 2;
	wstring a = L" ", b = L" ";
	for (long long h = 1; h < k; h++) {
		a += b;
	}b = a;
	if (i - j - k > k) b += L" ";
	a += s + b;
	return a;
}
bool kiemtraX(const wstring& s) {
	if (s.length() != 10)  return 1;
	if (s[2] != L'/' || s[5] != L'/') return 1;
	for (int i = 0; i < 10; i++) {
		if (i == 2 || i == 5) continue;
		if (s[i] - 48 < 0 || s[i] - 48 > 9) return 1;
	}
	return 0;
}
bool lonhon(const wstring& s1, const wstring& s2, int i) {
	if (i == 0) return s1 > s2;
	wstring xau1 = { s1[6],s1[7],s1[8],s1[9],s1[3],s1[4],s1[0],s1[1] }, xau2 = { s2[6],s2[7],s2[8],s2[9],s2[3],s2[4],s2[0],s2[1] };
	return xau1 > xau2;
}
bool nhohon(const wstring& s1, const wstring& s2, int i) {
	if (i == 0) return s1 < s2;
	wstring xau1 = { s1[6],s1[7],s1[8],s1[9],s1[3],s1[4],s1[0],s1[1] }, xau2 = { s2[6],s2[7],s2[8],s2[9],s2[3],s2[4],s2[0],s2[1] };
	return xau1 < xau2;
}
QLHS::QLHS() {

}
QLHS::~QLHS() {
	nt.Erase();
	ngt.Erase();
	cv.Erase();
}
void QLHS::nhap(int loai, int viTri) {
	wstring s;
	switch (loai) {
	case 1: {
		if (nt.Length() == 0) {
			NOITRU moi;
			wcout << L"Nhập hồ sơ của bệnh nhân nội trú:\n";
			wcout << L"   + Mã hồ sơ:          "; getline(wcin, s);
			moi.nhap(s); nt.Add(moi);
		}
		else {
			int bk = 0, j;
			do {
				wcout << L"Nhập hồ sơ của bệnh nhân nội trú:\n";
				wcout << L"   + Mã hồ sơ:          "; getline(wcin, s);
				for (j = 0; j < nt.Length(); j++) {
					if (nt[j].layma() == s)
					{
						wcout << L"\nMã hồ sơ này đã tồn tại!   Nhấn phím enter để nhập lại hoặc nhấn phím backspace để thoát!\n";
						while (1) {
							if (_kbhit()) {
								bk = _getch();
								if (bk == 13)break;
								if (bk == 8) {
									wcout << L"Đã hủy nhập thông tin bệnh nhân!" << endl; break;
								}
							}
						}
						break;
					}
				}
				if (j == nt.Length()) break;
			} while (bk != 8);
			if (bk != 8) {
				NOITRU moi; moi.nhap(s);
				if (viTri == 1) {
					nt.InsertFirst(moi);
				}
				else {
					nt.Add(moi);
				}
			}
		}
		break;
	}
	case 2: {
		if (ngt.Length() == 0) {
			NGOAITRU moi;
			wcout << L"Nhập hồ sơ của bệnh nhân ngoại trú:\n";
			wcout << L"   + Mã hồ sơ:          "; getline(wcin, s);
			moi.nhap(s); ngt.Add(moi);
		}
		else {
			int bk = 0, j;
			do {
				wcout << L"Nhập hồ sơ của bệnh nhân ngoại trú:\n";
				wcout << L"   + Mã hồ sơ:          "; getline(wcin, s);
				for (j = 0; j < ngt.Length(); j++) {
					if (ngt[j].layma() == s)
					{
						wcout << L"\nMã hồ sơ này đã tồn tại!   Nhấn phím enter để nhập lại hoặc nhấn phím backspace để thoát!\n";
						while (1) {
							if (_kbhit()) {
								bk = _getch();
								if (bk == 13)break;
								if (bk == 8) {
									wcout << L"Đã hủy nhập thông tin bệnh nhân!" << endl; break;
								}
							}
						}
						break;
					}
				}
				if (j == ngt.Length()) break;
			} while (bk != 8);
			if (bk != 8) {
				NGOAITRU moi; moi.nhap(s);
				if (viTri == 1) {
					ngt.InsertFirst(moi);
				}
				else {
					ngt.Add(moi);
				}
			}
		}
		break;
	}
	case 3: {
		if (cv.Length() == 0) {
			CHUYENVIEN moi;
			wcout << L"Nhập hồ sơ của bệnh nhân ngoại trú:\n";
			wcout << L"   + Mã hồ sơ:          "; getline(wcin, s);
			moi.nhap(s); cv.Add(moi);
		}
		else {
			int bk = 0, j;
			do {
				wcout << L"Nhập hồ sơ của bệnh nhân ngoại trú:\n";
				wcout << L"   + Mã hồ sơ:          "; getline(wcin, s);
				for (j = 0; j < cv.Length(); j++) {
					if (cv[j].layma() == s)
					{
						wcout << L"\nMã hồ sơ này đã tồn tại!   Nhấn phím enter để nhập lại hoặc nhấn phím backspace để thoát!\n";
						while (1) {
							if (_kbhit()) {
								bk = _getch();
								if (bk == 13)break;
								if (bk == 8) {
									wcout << L"Đã hủy nhập thông tin bệnh nhân!" << endl; break;
								}
							}
						}
						break;
					}
				}
				if (j == cv.Length()) break;
			} while (bk != 8);
			if (bk != 8) {
				CHUYENVIEN moi; moi.nhap(s);
				if (viTri == 1) {
					cv.InsertFirst(moi);
				}
				else {
					cv.Add(moi);
				}
			}
		}
		break;
	}
	}
}
void QLHS::chen(int loai) {
	wstring s, s1; int bk, i, j;
	wcout << L"Nhâp mã hồ sơ để chèn:   "; getline(wcin, s1);
	switch (loai) {
	case 1: {
		if (nt.Length() == 0) {
			wcout << L"Không có hồ sơ của bệnh nhân nội trú nào để chèn sau!\n"; break;
		}
		for (i = 0; i < nt.Length(); i++) {
			if (nt[i].layma() == s) {
				bk = 0;
				do {
					wcout << L"Nhập hồ sơ của bệnh nhân nội trú cần chèn:\n";
					wcout << L"   + Mã hồ sơ:          "; getline(wcin, s);
					for (j = 0; j < nt.Length(); j++) {
						if (nt[j].layma() == s)
						{
							wcout << L"\nMã hồ sơ này đã tồn tại!   Nhấn phím enter để chèn lại hoặc nhấn phím backspace để thoát!\n";
							while (1) {
								if (_kbhit()) {
									bk = _getch();
									if (bk == 13)break;
									if (bk == 8) {
										wcout << L"Đã hủy chèn hồ sơ bệnh nhân!" << endl; break;
									}
								}
							}
							break;
						}
					}
					if (j == nt.Length()) break;
				} while (bk != 8);
				if (bk != 8) {
					NOITRU moi; moi.nhap(s);
					nt.Insert(moi, i + 1);
				}
				break;
			}
		}
		if (i == nt.Length()) wcout << L"Không tìm thấy hồ sơ nội trú nào có mã như thế!" << endl; break;
	}
	case 2: {
		if (ngt.Length() == 0) {
			wcout << L"Không có hồ sơ của bệnh nhân ngoại trú nào để chèn sau!\n"; break;
		}
		for (i = 0; i < ngt.Length(); i++) {
			if (ngt[i].layma() == s) {
				bk = 0;
				do {
					wcout << L"Nhập hồ sơ của bệnh nhân ngoại trú cần chèn:\n";
					wcout << L"   + Mã hồ sơ:          "; getline(wcin, s);
					for (j = 0; j < ngt.Length(); j++) {
						if (ngt[j].layma() == s)
						{
							wcout << L"\nMã hồ sơ này đã tồn tại!   Nhấn phím enter để chèn lại hoặc nhấn phím backspace để thoát!\n";
							while (1) {
								if (_kbhit()) {
									bk = _getch();
									if (bk == 13)break;
									if (bk == 8) {
										wcout << L"Đã hủy chèn hồ sơ bệnh nhân!" << endl; break;
									}
								}
							}
							break;
						}
					}
					if (j == ngt.Length()) break;
				} while (bk != 8);
				if (bk != 8) {
					NGOAITRU moi; moi.nhap(s);
					ngt.Insert(moi, i + 1);
				}
				break;
			}
		}
		if (i == ngt.Length()) wcout << L"Không tìm thấy hồ sơ ngoại trú nào có mã như thế!" << endl; break;
	}
	case 3: {
		if (cv.Length() == 0) {
			wcout << L"Không có hồ sơ của bệnh nhân chuyển viện nào để chèn sau!\n"; break;
		}
		for (i = 0; i < cv.Length(); i++) {
			if (cv[i].layma() == s) {
				bk = 0;
				do {
					wcout << L"Nhập hồ sơ của bệnh nhân chuyển viện cần chèn:\n";
					wcout << L"   + Mã hồ sơ:          "; getline(wcin, s);
					for (j = 0; j < cv.Length(); j++) {
						if (cv[j].layma() == s)
						{
							wcout << L"\nMã hồ sơ này đã tồn tại!   Nhấn phím enter để chèn lại hoặc nhấn phím backspace để thoát!\n";
							while (1) {
								if (_kbhit()) {
									bk = _getch();
									if (bk == 13)break;
									if (bk == 8) {
										wcout << L"Đã hủy chèn hồ sơ bệnh nhân!" << endl; break;
									}
								}
							}
							break;
						}
					}
					if (j == cv.Length()) break;
				} while (bk != 8);
				if (bk != 8) {
					CHUYENVIEN moi; moi.nhap(s);
					cv.Insert(moi, i + 1);
				}
				break;
			}
		}
		if (i == cv.Length()) wcout << L"Không tìm thấy hồ sơ chuyển viện nào có mã như thế!" << endl; break;
	}
	}
}
void QLHS::nhapfile(int loai, int viTri) {
	wstring s;	wifstream file;
	switch (loai) {
	case 4:
	case 1: {
		wcout << L"Nhập tên file input nội trú:   "; getline(wcin, s);
		file.open(s);
		locale loc(locale(), new codecvt_utf8<wchar_t>);
		if (file.is_open()) {
			file.imbue(loc);
			while (!file.eof()) {
				getline(file, s, L'\t');
				if (nt.Length() == 0) {
					NOITRU moi;	moi.nhapfile(file, s);
					nt.Add(moi);
				}
				else {
					int co = 0;
					for (int i = 0; i < nt.Length(); i++) {
						if (nt[i].layma() == s) {
							getline(file, s, L'\n'); co = 1; break;
						}
					}
					if (co) continue;
					NOITRU moi; moi.nhapfile(file, s);
					if (viTri == 1) {
						nt.InsertFirst(moi);
					}
					else {
						nt.Add(moi);
					}
				}
			}
			wcout << L"Đã lưu thông tin của các bệnh nhân từ file!" << endl;
		}
		else wcout << L"Không thể mở file!" << endl;
		file.close(); if (loai == 1)break;
	}
	case 2: {
		wcout << L"Nhập tên file input ngoại trú:   "; getline(wcin, s);
		file.open(s);
		locale loc(locale(), new codecvt_utf8<wchar_t>);
		if (file.is_open()) {
			file.imbue(loc);
			while (!file.eof()) {
				getline(file, s, L'\t');
				if (ngt.Length() == 0) {
					NGOAITRU moi; moi.nhapfile(file, s);
					ngt.Add(moi);
				}
				else {
					int co = 0;
					for (int i = 0; i < ngt.Length(); i++) {
						if (ngt[i].layma() == s) {
							getline(file, s, L'\n'); co = 1; break;
						}
					}
					if (co == 1)continue;
					NGOAITRU moi; moi.nhapfile(file, s);
					if (viTri == 1) {
						ngt.InsertFirst(moi);
					}
					else {
						ngt.Add(moi);
					}
				}
			}
			wcout << L"Đã lưu thông tin của các bệnh nhân từ file!" << endl;
		}
		else wcout << L"Không thể mở file!" << endl;
		file.close(); if (loai == 2)break;
	}
	case 3: {
		wcout << L"Nhập tên file input chuyển viện:   "; getline(wcin, s);
		file.open(s);
		locale loc(locale(), new codecvt_utf8<wchar_t>);
		if (file.is_open()) {
			file.imbue(loc);
			while (!file.eof()) {
				getline(file, s, L'\t');
				if (cv.Length() == 0) {
					CHUYENVIEN moi; moi.nhapfile(file, s);
					cv.Add(moi);
				}
				else {
					int co = 0;
					for (int i = 0; i < cv.Length(); i++) {
						if (cv[i].layma() == s) {
							getline(file, s, L'\n'); co = 1; break;
						}
					}
					if (co) continue;
					CHUYENVIEN moi; moi.nhapfile(file, s);
					if (viTri == 1) {
						cv.InsertFirst(moi);
					}
					else {
						cv.Add(moi);
					}
				}
			}
			wcout << L"Đã lưu thông tin của các bệnh nhân từ file!" << endl;
		}
		else wcout << L"Không thể mở file!" << endl;
		file.close(); break;
	}
	}
}
void QLHS::capnhat(int loai, int chon, const wstring& s1) {
	wstring s; int j, bk = 0;
	switch (loai) {
	case 1: {
		for (int i = 0; i < nt.Length(); i++) {
			if (nt[i].layma() == s1) {
				wcout << L"Cập nhật hồ sơ của bệnh nhân nội trú (nhấn enter nếu bạn không muốn cập nhật một thuộc tính nào đó!):\n";
				switch (chon) {
				case 0: case 8: {
					do {
						wcout << L"   + Nhập mã hồ sơ mới:     "; getline(wcin, s);
						for (j = 0; j < nt.Length(); j++) {
							if (nt[j].layma() == s)
							{
								wcout << L"\nMã hồ sơ này đã tồn tại!   Nhấn phím enter để cập nhật lại hoặc nhấn phím backspace để thoát!\n";
								while (1) {
									if (_kbhit()) {
										bk = _getch();
										if (bk == 13)break;
										if (bk == 8) {
											wcout << L"Đã hủy cập nhật thông tin bệnh nhân!" << endl; break;
										}
									}
								}
								break;
							}
						}
						if (bk == 8)return;
					} while (j != nt.Length());
					nt[i].capnhat(chon, s);
					break;
				}
				case 1:case 2:case 3: case 4: case 5: case 6: case 7: {
					nt[i].capnhat(chon);
					break;
				}
				}
				wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
				wcout << L"│                                                                                   NỘI TRÚ                                                                                           │\n";
				wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
				wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
				wcout << nt[i];
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┘\n";
				return;
			}
		}
		if (nt.Length() == 0) {
			wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                                    NỘI TRÚ                                                                                          │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			wcout << L"│                                                             Không có hồ sơ của bệnh nhân nội trú nào để cập nhật!                                                                   │\n";
			wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                                    NỘI TRÚ                                                                                          │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			wcout << L"│                                                Không tìm thấy mã hồ sơ nào như trên trong các hồ sơ của bệnh nhân nội trú!                                                          │\n";
			wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		break;
	}
	case 2: {
		for (int i = 0; i < ngt.Length(); i++) {
			if (ngt[i].layma() == s1) {
				wcout << L"Cập nhật hồ sơ của bệnh nhân ngoại trú (nhấn enter nếu bạn không muốn cập nhật một thuộc tính nào đó!):\n";
				switch (chon) {
				case 0: case 7: {
					do {
						wcout << L"   + Nhập mã hồ sơ mới:     "; getline(wcin, s);
						for (j = 0; j < ngt.Length(); j++) {
							if (ngt[j].layma() == s)
							{
								wcout << L"\nMã hồ sơ này đã tồn tại!   Nhấn phím enter để cập nhật lại hoặc nhấn phím backspace để thoát!\n";
								while (1) {
									if (_kbhit()) {
										bk = _getch();
										if (bk == 13)break;
										if (bk == 8) {
											wcout << L"Đã hủy cập nhật thông tin bệnh nhân!" << endl; break;
										}
									}
								}
								break;
							}
						}
						if (bk == 8)return;
					} while (j != ngt.Length());
					ngt[i].capnhat(chon, s);
					break;
				}
				case 1:case 2: case 3: case 4: case 5: case 6: {
					ngt[i].capnhat(chon);
					break;
				}
				}
				wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
				wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
				wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
				wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
				wcout << ngt[i];
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┘\n";
				return;
			}
		}
		if (ngt.Length() == 0) {
			wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			wcout << L"│                                            Không có hồ sơ của bệnh nhân ngoại trú nào để cập nhật!                                               │\n";
			wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			wcout << L"│                                Không tìm thấy mã hồ sơ nào như trên trong các hồ sơ của bệnh nhân ngoại trú!                                     │\n";
			wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		break;
	}
	case 3: {
		for (int i = 0; i < cv.Length(); i++) {
			if (cv[i].layma() == s1) {
				wcout << L"Cập nhật hồ sơ của bệnh nhân chuyển viện (nhấn enter nếu bạn không muốn cập nhật một thuộc tính nào đó!):\n";
				switch (chon) {
				case 0: case 6: {
					do {
						wcout << L"   + Nhập mã hồ sơ mới:     "; getline(wcin, s);
						for (j = 0; j < cv.Length(); j++) {
							if (cv[j].layma() == s)
							{
								wcout << L"\nMã hồ sơ này đã tồn tại!   Nhấn phím enter để cập nhật lại hoặc nhấn phím backspace để thoát!\n";
								while (1) {
									if (_kbhit()) {
										bk = _getch();
										if (bk == 13)break;
										if (bk == 8) {
											wcout << L"Đã hủy cập nhật thông tin bệnh nhân!" << endl; break;
										}
									}
								}
								break;
							}
						}
						if (bk == 8)return;
					} while (j != cv.Length());
					cv[i].capnhat(chon, s);
					break;
				}
				case 1: case 2: case 3: case 4: case 5: {
					cv[i].capnhat(chon);
					break;
				}
				}
				wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
				wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
				wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
				wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
				wcout << cv[i];
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┘\n";
				return;
			}
		}
		if (cv.Length() == 0) {
			wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                      CHUYỂN VIỆN                                                                      │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			wcout << L"│                                              Không có hồ sơ của bệnh nhân chuyển viện nào để cập nhật!                                                │\n";
			wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                      CHUYỂN VIỆN                                                                      │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			wcout << L"│                                    Không tìm thấy mã hồ sơ nào như trên trong các hồ sơ của bệnh nhân chuyển viện!                                    │\n";
			wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		break;
	}
	}
}
void QLHS::tim(const wstring& cumTu, int loai, int TT) {
	int co; wstring s;
	switch (loai) {
	case 1: {
		wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                         NỘI TRÚ                                                                                                     │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
		if (nt.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			wcout << L"│                                                    Không có hồ sơ của bệnh nhân nội trú nào để tìm!                                                                                 │\n";
			wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			co = 0;
			switch (TT) {
			case 1: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layma().find(cumTu) != string::npos) { wcout << nt[i]; co = 1; }
				}
				s = L"mã hồ sơ";
				break;
			}
			case 2: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layHT().find(cumTu) != string::npos) { wcout << nt[i]; co = 1; }
				}
				s = L"họ tên";
				break;
			}
			case 3: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layNS().find(cumTu) != string::npos) { wcout << nt[i]; co = 1; }
				}
				s = L"ngày sinh";
				break;
			}
			case 4: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layCD().find(cumTu) != string::npos) { wcout << nt[i]; co = 1; }
				}
				s = L"chuẩn đoán";
				break;
			}
			case 5: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layNV().find(cumTu) != string::npos) { wcout << nt[i]; co = 1; }
				}
				s = L"ngày nhập viện";
				break;
			}
			case 6: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layRV().find(cumTu) != string::npos) { wcout << nt[i]; co = 1; }
				}
				s = L"ngày ra viện";
				break;
			}
			case 7: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layK().find(cumTu) != string::npos) { wcout << nt[i]; co = 1; }
				}
				s = L"khoa";
				break;
			}
			case 8: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].laySG().find(cumTu) != string::npos) { wcout << nt[i]; co = 1; }
				}
				s = L"số giường";
				break;
			}
			}
			if (co) {
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┘\n";
			}
			else {
				wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
				wcout << L"│" << dinhdang(L"Không tìm thấy " + s + L" nào có cụm từ trên trong các hồ sơ nội trú!", 146) << L"│\n";
				wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
			}
		}
		break;
	}
	case 2: {
		wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
		if (ngt.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			wcout << L"│                                             Không có hồ sơ của bệnh nhân ngoại trú nào để tìm!                                                   │\n";
			wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			co = 0;
			switch (TT) {
			case 1: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layma().find(cumTu) != string::npos) { wcout << ngt[i]; co = 1; }
				}
				s = L"mã hồ sơ";
				break;
			}
			case 2: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layHT().find(cumTu) != string::npos) { wcout << ngt[i]; co = 1; }
				}
				s = L"họ tên";
				break;
			}
			case 3: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layNS().find(cumTu) != string::npos) { wcout << ngt[i]; co = 1; }
				}
				s = L"ngày sinh";
				break;
			}
			case 4: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layCD().find(cumTu) != string::npos) { wcout << ngt[i]; co = 1; }
				}
				s = L"chuẩn đoán";
				break;
			}
			case 5: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layNK().find(cumTu) != string::npos) { wcout << ngt[i]; co = 1; }
				}
				s = L"ngày khám";
				break;
			}
			case 6: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layso().find(cumTu) != string::npos) { wcout << ngt[i]; co = 1; }
				}
				s = L"số bảo hiểm y tế";
				break;
			}
			case 7: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layMT().find(cumTu) != string::npos) { wcout << ngt[i]; co = 1; }
				}
				s = L"mã toa";
				break;
			}
			}
			if (co) {
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┘\n";
			}
			else {
				wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
				wcout << L"│" << dinhdang(L"Không tìm thấy " + s + L" nào có cụm từ trên trong các hồ sơ ngoại trú!", 146) << L"│\n";
				wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
			}
		}
		break;
	}
	case 3: {
		wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
		if (cv.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			wcout << L"│                                                        Không có hồ sơ của bệnh nhân chuyển viện nào để tìm!                                           │\n";
			wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			co = 0;
			switch (TT) {
			case 1: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layma().find(cumTu) != string::npos) { wcout << cv[i]; co = 1; }
				}
				s = L"mã hồ sơ";
				break;
			}
			case 2: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layHT().find(cumTu) != string::npos) { wcout << cv[i]; co = 1; }
				}
				s = L"họ tên";
				break;
			}
			case 3: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layNS().find(cumTu) != string::npos) { wcout << cv[i]; co = 1; }
				}
				s = L"ngày sinh";
				break;
			}
			case 4: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layCD().find(cumTu) != string::npos) { wcout << cv[i]; co = 1; }
				}
				s = L"chuẩn đoán";
				break;
			}
			case 5: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layNgC().find(cumTu) != string::npos) { wcout << cv[i]; co = 1; }
				}
				s = L"ngày chuyển";
				break;
			}
			case 6: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layNC().find(cumTu) != string::npos) { wcout << cv[i]; co = 1; }
				}
				s = L"nơi chuyển";
				break;
			}
			}
			if (co) {
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┘\n";
			}
			else {
				wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
				wcout << L"│" << dinhdang(L"Không tìm thấy " + s + L" nào có cụm từ trên trong các hồ sơ chuyển viện!", 151) << L"│\n";
				wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
			}
		}
		break;
	}
	}
}
void QLHS::sapxep(int loai, int TT, int soSanh) {
	NOITRU nt1;
	NGOAITRU ngt1;
	CHUYENVIEN cv1; bool (*ss)(const wstring&, const wstring&, int); int k; wstring s; wstring s1;
	if (soSanh) { ss = nhohon; s1 = L"giảm dần"; }
	else {
		ss = lonhon;
		s1 = L"tăng dần";
	}
	switch (loai) {
	case 1: {
		if (nt.Length() == 0) {
			wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                         NỘI TRÚ                                                                                                     │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			wcout << L"│                                                     Không có hồ sơ của bệnh nhân nội trú nào để sắp xếp!                                                                            │\n";
			wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			switch (TT) {
			case 1: {
				for (int i = 0; i < nt.Length() - 1; i++) {
					nt1 = nt[i]; k = i;
					for (int j = i + 1; j < nt.Length(); j++) {
						if ((*ss)(nt1.layma(), nt[j].layma(), 0)) {
							nt1 = nt[j]; k = j;
						}
					}
					nt[k] = nt[i];
					nt[i] = nt1;
				}
				s = L"mã hồ sơ";
				break;
			}
			case 2: {
				for (int i = 0; i < nt.Length() - 1; i++) {
					nt1 = nt[i]; k = i;
					for (int j = i + 1; j < nt.Length(); j++) {
						if ((*ss)(nt1.layHT(), nt[j].layHT(), 0)) {
							nt1 = nt[j]; k = j;
						}
					}
					nt[k] = nt[i];
					nt[i] = nt1;
				}
				s = L"họ tên";
				break;
			}
			case 3: {
				for (int i = 0; i < nt.Length() - 1; i++) {
					nt1 = nt[i]; k = i;
					for (int j = i + 1; j < nt.Length(); j++) {
						if ((*ss)(nt1.layNS(), nt[j].layNS(), 1)) {
							nt1 = nt[j]; k = j;
						}
					}
					nt[k] = nt[i];
					nt[i] = nt1;
				}
				s = L"ngày sinh";
				break;
			}
			case 4: {
				for (int i = 0; i < nt.Length() - 1; i++) {
					nt1 = nt[i]; k = i;
					for (int j = i + 1; j < nt.Length(); j++) {
						if ((*ss)(nt1.layCD(), nt[j].layCD(), 0)) {
							nt1 = nt[j]; k = j;
						}
					}
					nt[k] = nt[i];
					nt[i] = nt1;
				}
				s = L"chuẩn đoán";
				break;
			}
			case 5: {
				for (int i = 0; i < nt.Length() - 1; i++) {
					nt1 = nt[i]; k = i;
					for (int j = i + 1; j < nt.Length(); j++) {
						if ((*ss)(nt1.layNV(), nt[j].layNV(), 1)) {
							nt1 = nt[j]; k = j;
						}
					}
					nt[k] = nt[i];
					nt[i] = nt1;
				}
				s = L"ngày nhập viện";
				break;
			}
			case 6: {
				for (int i = 0; i < nt.Length() - 1; i++) {
					nt1 = nt[i]; k = i;
					for (int j = i + 1; j < nt.Length(); j++) {
						if ((*ss)(nt1.layRV(), nt[j].layRV(), 1)) {
							nt1 = nt[j]; k = j;
						}
					}
					nt[k] = nt[i];
					nt[i] = nt1;
				}
				s = L"ngày ra viện";
				break;
			}
			case 7: {
				for (int i = 0; i < nt.Length() - 1; i++) {
					nt1 = nt[i]; k = i;
					for (int j = i + 1; j < nt.Length(); j++) {
						if ((*ss)(nt1.layK(), nt[j].layK(), 0)) {
							nt1 = nt[j]; k = j;
						}
					}
					nt[k] = nt[i];
					nt[i] = nt1;
				}
				s = L"khoa";
				break;
			}
			case 8: {
				for (int i = 0; i < nt.Length() - 1; i++) {
					nt1 = nt[i]; k = i;
					for (int j = i + 1; j < nt.Length(); j++) {
						if ((*ss)(nt1.laySG(), nt[j].laySG(), 0)) {
							nt1 = nt[j]; k = j;
						}
					}
					nt[k] = nt[i];
					nt[i] = nt1;
				}
				s = L"số giường";
				break;
			}
			}
			wcout << L"Đã sắp xếp " + s1 + L" hồ sơ của các bệnh nhân nội trú theo " + s + L"!\n";
			wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                         NỘI TRÚ                                                                                                     │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
			wcout << nt;
			wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┘\n\n";
		}
		break;
	}
	case 2: {
		if (ngt.Length() == 0) {
			wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			wcout << L"│                                             Không có hồ sơ của bệnh nhân ngoại trú nào để sắp xếp!                                               │\n";
			wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			switch (TT) {
			case 1: {
				for (int i = 0; i < ngt.Length() - 1; i++) {
					ngt1 = ngt[i]; k = i;
					for (int j = i + 1; j < ngt.Length(); j++) {
						if ((*ss)(ngt1.layma(), ngt[j].layma(), 0)) {
							ngt1 = ngt[j]; k = j;
						}
					}
					ngt[k] = ngt[i];
					ngt[i] = ngt1;
				}
				s = L"mã hồ sơ";
				break;
			}
			case 2: {
				for (int i = 0; i < ngt.Length() - 1; i++) {
					ngt1 = ngt[i]; k = i;
					for (int j = i + 1; j < ngt.Length(); j++) {
						if ((*ss)(ngt1.layHT(), ngt[j].layHT(), 0)) {
							ngt1 = ngt[j]; k = j;
						}
					}
					ngt[k] = ngt[i];
					ngt[i] = ngt1;
				}
				s = L"họ tên";
				break;
			}
			case 3: {
				for (int i = 0; i < ngt.Length() - 1; i++) {
					ngt1 = ngt[i]; k = i;
					for (int j = i + 1; j < ngt.Length(); j++) {
						if ((*ss)(ngt1.layNS(), ngt[j].layNS(), 1)) {
							ngt1 = ngt[j]; k = j;
						}
					}
					ngt[k] = ngt[i];
					ngt[i] = ngt1;
				}
				s = L"ngày sinh";
				break;
			}
			case 4: {
				for (int i = 0; i < ngt.Length() - 1; i++) {
					ngt1 = ngt[i]; k = i;
					for (int j = i + 1; j < ngt.Length(); j++) {
						if ((*ss)(ngt1.layCD(), ngt[j].layCD(), 0)) {
							ngt1 = ngt[j]; k = j;
						}
					}
					ngt[k] = ngt[i];
					ngt[i] = ngt1;
				}
				s = L"chuẩn đoán";
				break;
			}
			case 5: {
				for (int i = 0; i < ngt.Length() - 1; i++) {
					ngt1 = ngt[i]; k = i;
					for (int j = i + 1; j < ngt.Length(); j++) {
						if ((*ss)(ngt1.layNK(), ngt[j].layNK(), 1)) {
							ngt1 = ngt[j]; k = j;
						}
					}
					ngt[k] = ngt[i];
					ngt[i] = ngt1;
				}
				s = L"ngày khám";
				break;
			}
			case 6: {
				for (int i = 0; i < ngt.Length() - 1; i++) {
					ngt1 = ngt[i]; k = i;
					for (int j = i + 1; j < ngt.Length(); j++) {
						if ((*ss)(ngt1.layso(), ngt[j].layso(), 0)) {
							ngt1 = ngt[j]; k = j;
						}
					}
					ngt[k] = ngt[i];
					ngt[i] = ngt1;
				}
				s = L"số bảo hiểm y tế";
				break;
			}
			case 7: {
				for (int i = 0; i < ngt.Length() - 1; i++) {
					ngt1 = ngt[i]; k = i;
					for (int j = i + 1; j < ngt.Length(); j++) {
						if ((*ss)(ngt1.layMT(), ngt[j].layMT(), 0)) {
							ngt1 = ngt[j]; k = j;
						}
					}
					ngt[k] = ngt[i];
					ngt[i] = ngt1;
				}
				s = L"mã toa";
				break;
			}
			}
			wcout << L"Đã sắp xếp " + s1 + L" hồ sơ của các bệnh nhân ngoại trú theo " + s + L"!\n";
			wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
			wcout << ngt;
			wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┘\n\n";
		}
		break;
	}
	case 3: {
		if (cv.Length() == 0) {
			wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			wcout << L"│                                                 Không có hồ sơ của bệnh nhân chuyển viện nào để sắp xếp!                                              │\n";
			wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			switch (TT) {
			case 1: {
				for (int i = 0; i < cv.Length() - 1; i++) {
					cv1 = cv[i]; k = i;
					for (int j = i + 1; j < cv.Length(); j++) {
						if ((*ss)(cv1.layma(), cv[j].layma(), 0)) {
							cv1 = cv[j]; k = j;
						}
					}
					cv[k] = cv[i];
					cv[i] = cv1;
				}
				s = L"mã hồ sơ";
				break;
			}
			case 2: {
				for (int i = 0; i < cv.Length() - 1; i++) {
					cv1 = cv[i]; k = i;
					for (int j = i + 1; j < cv.Length(); j++) {
						if ((*ss)(cv1.layHT(), cv[j].layHT(), 0)) {
							cv1 = cv[j]; k = j;
						}
					}
					cv[k] = cv[i];
					cv[i] = cv1;
				}
				s = L"họ tên";
				break;
			}
			case 3: {
				for (int i = 0; i < cv.Length() - 1; i++) {
					cv1 = cv[i]; k = i;
					for (int j = i + 1; j < cv.Length(); j++) {
						if ((*ss)(cv1.layNS(), cv[j].layNS(), 1)) {
							cv1 = cv[j]; k = j;
						}
					}
					cv[k] = cv[i];
					cv[i] = cv1;
				}
				s = L"ngày sinh";
				break;
			}
			case 4: {
				for (int i = 0; i < cv.Length() - 1; i++) {
					cv1 = cv[i]; k = i;
					for (int j = i + 1; j < cv.Length(); j++) {
						if ((*ss)(cv1.layCD(), cv[j].layCD(), 0)) {
							cv1 = cv[j]; k = j;
						}
					}
					cv[k] = cv[i];
					cv[i] = cv1;
				}
				s = L"chuẩn đoán";
				break;
			}
			case 5: {
				for (int i = 0; i < cv.Length() - 1; i++) {
					cv1 = cv[i]; k = i;
					for (int j = i + 1; j < cv.Length(); j++) {
						if ((*ss)(cv1.layNgC(), cv[j].layNgC(), 1)) {
							cv1 = cv[j]; k = j;
						}
					}
					cv[k] = cv[i];
					cv[i] = cv1;
				}
				s = L"ngày chuyển";
				break;
			}
			case 6: {
				for (int i = 0; i < cv.Length() - 1; i++) {
					cv1 = cv[i]; k = i;
					for (int j = i + 1; j < cv.Length(); j++) {
						if ((*ss)(cv1.layNC(), cv[j].layNC(), 0)) {
							cv1 = cv[j]; k = j;
						}
					}
					cv[k] = cv[i];
					cv[i] = cv1;
				}
				s = L"nơi chuyển";
				break;
			}
			}
			wcout << L"Đã sắp xếp " + s1 + L" hồ sơ của các bệnh nhân chuyển viện theo " + s + L"!\n";
			wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
			wcout << cv;
			wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┘\n\n";
		}
		break;
	}
	}
}
void QLHS::tinh(wstring& X, int loai) {
	int dem = 0, * mang = nullptr, j;
	while (kiemtraX(X)) {
		wcout << L"Hãy nhập một ngày sinh có dạng dd/mm/yyyy! (Ví dụ: 18/03/1990)" << endl;
		Sleep(1000); system("cls");
		wcout << L"Nhập ngày sinh X:   ";
		getline(wcin, X);
	}
	switch (loai) {
	case 1: {
		if (nt.Length() == 0) {
			wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                                    NỘI TRÚ                                                                                          │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			wcout << L"│                                                               Không có hồ sơ của bệnh nhân nội trú nào để tính!                                                                     │\n";
			wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			mang = new int[nt.Length() + 1]; j = 0;
			for (int i = 0; i < nt.Length(); i++) {
				if (lonhon(nt[i].layNS(), X, 1)) { mang[j] = i; j++; dem++; }
			}
			if (!dem) {
				wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
				wcout << L"│                                                                                    NỘI TRÚ                                                                                          │\n";
				wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
				wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
				wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
				wcout << L"│" << dinhdang(L"Không có hồ sơ của bệnh nhân nội trú nào có ngày sinh lớn hơn ngày sinh " + X + L"!", 146) << L"│\n";
				wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
			}
			else {
				wcout << L"Có tổng cộng " << j << L" hồ sơ của bệnh nhân nội trú có ngày sinh lớn hơn ngày sinh " << X << L":" << endl;
				wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
				wcout << L"│                                                                                    NỘI TRÚ                                                                                          │\n";
				wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
				wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
				for (int i = 0; i < j; i++) {
					wcout << nt[mang[i]];
				}
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┘\n";
			}
		}
		break;
	}
	case 2: {
		if (ngt.Length() == 0) {
			wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			wcout << L"│                                             Không có hồ sơ của bệnh nhân ngoại trú nào để tính!                                                  │\n";
			wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			mang = new int[ngt.Length() + 1]; j = 0;
			for (int i = 0; i < ngt.Length(); i++) {
				if (lonhon(ngt[i].layNS(), X, 1)) { mang[j] = i; j++; dem++; }
			}
			if (!dem) {
				wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
				wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
				wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
				wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
				wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
				wcout << L"│" << dinhdang(L"Không có hồ sơ của bệnh nhân ngoại trú nào có ngày sinh lớn hơn ngày sinh " + X + L"!", 146) << L"│\n";
				wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
			}
			else {
				wcout << L"Có tổng cộng " << j << L" hồ sơ của bệnh nhân ngoại trú có ngày sinh lớn hơn ngày sinh " << X << L":" << endl;
				wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
				wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
				wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
				wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
				for (int i = 0; i < j; i++) {
					wcout << ngt[mang[i]];
				}
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┘\n";
			}
		}
		break;
	}
	case 3: {
		if (cv.Length() == 0) {
			wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
			wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
			wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
			wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			wcout << L"│                                                Không có hồ sơ của bệnh nhân chuyển viện nào để tính!                                                  │\n";
			wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			mang = new int[cv.Length() + 1]; j = 0;
			for (int i = 0; i < cv.Length(); i++) {
				if (lonhon(cv[i].layNS(), X, 1)) { mang[j] = i; j++; dem++; }
			}
			if (!dem) {
				wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
				wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
				wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
				wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
				wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
				wcout << L"│" << dinhdang(L"Không có hồ sơ của bệnh nhân chuyển viện nào có ngày sinh lớn hơn ngày sinh " + X + L"!", 151) << L"│\n";
				wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
			}
			else {
				wcout << L"Có tổng cộng " << j << L" hồ sơ của bệnh nhân chuyển viện có ngày sinh lớn hơn ngày sinh " << X << L":" << endl;
				wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
				wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
				wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
				wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
				for (int i = 0; i < j; i++) {
					wcout << cv[mang[i]];
				}
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┘\n";
			}
		}
		break;
	}
	}
	if (mang != nullptr) delete[] mang;
}
void QLHS::xoa(const wstring& s, int loai, int TT) {
	int dem, * mang = nullptr; wstring s1;
	switch (loai) {
	case 1: {
		wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                                    NỘI TRÚ                                                                                          │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
		if (nt.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			wcout << L"│                                                               Không có hồ sơ của bệnh nhân nội trú nào để xóa!                                                                      │\n";
			wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			dem = 0; mang = new int[nt.Length()];
			switch (TT) {
			case 1: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layma().find(s) != string::npos) {
						wcout << nt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"mã hồ sơ";
				break;
			}
			case 2: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layHT().find(s) != string::npos) {
						wcout << nt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"họ tên";
				break;
			}
			case 3: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layNS().find(s) != string::npos) {
						wcout << nt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"ngày sinh";
				break;
			}
			case 4: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layCD().find(s) != string::npos) {
						wcout << nt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"chuẩn đoán";
				break;
			}
			case 5: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layNV().find(s) != string::npos) {
						wcout << nt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"ngày nhập viện";
				break;
			}
			case 6: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layRV().find(s) != string::npos) {
						wcout << nt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"ngày ra viện";
				break;
			}
			case 7: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].layK().find(s) != string::npos) {
						wcout << nt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"khoa";
				break;
			}
			case 8: {
				for (int i = 0; i < nt.Length(); i++) {
					if (nt[i].laySG().find(s) != string::npos) {
						wcout << nt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"số giường";
				break;
			}
			}
			if (!dem) {
				wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
				wcout << L"│" << dinhdang(L"Không tìm thấy " + s1 + L" nào có cụm từ trên trong các hồ sơ nội trú!", 146) << L"│\n";
				wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
			}
			else {
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┘\n";
				do {
					wstring s1;
					wcout << L"Bạn có chắc chắn muốn xóa hồ sơ của các bệnh nhân nội trú này? (c/k)   "; getline(wcin, s1);
					if (s1[0] == L'\0') wcout << L"Vui lòng nhập một kí tự! (c/k)\n";
					else {
						if (s1[1] != L'\0' || (s1[0] != L'c' && s1[0] != L'k' && s1[0] != L'C' && s1[0] != L'K')) wcout << L"Vui lòng chỉ nhập c hay C (có) hoặc k hay K(không)!\n";
						else {
							if (s1[0] == L'c' || s1[0] == L'C') {
								nt.Remove(mang, dem);
								wcout << L"Đã xóa hồ sơ của các bệnh nhân!\n";
							}
							else wcout << L"Đã hủy xóa hồ sơ của các bệnh nhân!\n";
							break;
						}
					}
				} while (1);
			}
		}
		if (mang != nullptr)delete[] mang;
		break;
	}
	case 2: {
		wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
		if (ngt.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			wcout << L"│                                              Không có hồ sơ của bệnh nhân ngoại trú nào để xóa!                                                  │\n";
			wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			dem = 0; mang = new int[ngt.Length()];
			switch (TT) {
			case 1: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layma().find(s) != string::npos) {
						wcout << ngt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"mã hồ sơ";
				break;
			}
			case 2: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layHT().find(s) != string::npos) {
						wcout << ngt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"họ tên";
				break;
			}
			case 3: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layNS().find(s) != string::npos) {
						wcout << ngt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"ngày sinh";
				break;
			}
			case 4: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layCD().find(s) != string::npos) {
						wcout << ngt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"chuẩn đoán";
				break;
			}
			case 5: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layNK().find(s) != string::npos) {
						wcout << ngt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"ngày khám";
				break;
			}
			case 6: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layso().find(s) != string::npos) {
						wcout << ngt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"số bảo hiểm y tế";
				break;
			}
			case 7: {
				for (int i = 0; i < ngt.Length(); i++) {
					if (ngt[i].layMT().find(s) != string::npos) {
						wcout << ngt[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"mã toa";
				break;
			}
			}
			if (!dem) {
				wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
				wcout << L"│" << dinhdang(L"Không tìm thấy " + s1 + L" nào có cụm từ trên trong các hồ sơ ngoại trú!", 146) << L"│\n";
				wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
			}
			else {
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┘\n";
				do {
					wstring s1;
					wcout << L"Bạn có chắc chắn muốn xóa hồ sơ của các bệnh nhân ngoại trú này? (c/k)   "; getline(wcin, s1);
					if (s1[0] == L'\0') wcout << L"Vui lòng nhập một kí tự! (c/k)\n";
					else {
						if (s1[1] != L'\0' || (s1[0] != L'c' && s1[0] != L'k' && s1[0] != L'C' && s1[0] != L'K')) wcout << L"Vui lòng chỉ nhập c hay C (có) hoặc k hay K(không)!\n";
						else {
							if (s1[0] == L'c' || s1[0] == L'C') {
								ngt.Remove(mang, dem);
								wcout << L"Đã xóa hồ sơ của các bệnh nhân!\n";
							}
							else wcout << L"Đã hủy xóa hồ sơ của các bệnh nhân!\n";
							break;
						}
					}
				} while (1);
			}
		}
		if (mang != nullptr)delete[] mang;
		break;
	}
	case 3: {
		wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
		if (cv.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			wcout << L"│                                                Không có hồ sơ của bệnh nhân chuyển viện nào để xóa!                                                   │\n";
			wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			dem = 0; mang = new int[cv.Length()];
			switch (TT) {
			case 1: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layma().find(s) != string::npos) {
						wcout << cv[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"mã hồ sơ";
				break;
			}
			case 2: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layHT().find(s) != string::npos) {
						wcout << cv[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"họ tên";
				break;
			}
			case 3: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layNS().find(s) != string::npos) {
						wcout << cv[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"ngày sinh";
				break;
			}
			case 4: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layCD().find(s) != string::npos) {
						wcout << cv[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"chuẩn đoán";
				break;
			}
			case 5: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layNgC().find(s) != string::npos) {
						wcout << cv[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"ngày chuyển";
				break;
			}
			case 6: {
				for (int i = 0; i < cv.Length(); i++) {
					if (cv[i].layNC().find(s) != string::npos) {
						wcout << cv[i]; mang[dem] = i; dem++;
					}
				}
				s1 = L"nơi chuyển";
				break;
			}
			}
			if (!dem) {
				wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
				wcout << L"│" << dinhdang(L"Không tìm thấy " + s1 + L" nào có cụm từ trên trong các hồ sơ chuyển viện!", 151) << L"│\n";
				wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
			}
			else {
				wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┘\n";
				do {
					wstring s1;
					wcout << L"Bạn có chắc chắn muốn xóa hồ sơ của các bệnh nhân chuyển viện này? (c/k)   "; getline(wcin, s1);
					if (s1[0] == L'\0') wcout << L"Vui lòng nhập một kí tự! (c/k)\n";
					else {
						if (s1[1] != L'\0' || (s1[0] != L'c' && s1[0] != L'k' && s1[0] != L'C' && s1[0] != L'K')) wcout << L"Vui lòng chỉ nhập c hay C (có) hoặc k hay K(không)!\n";
						else {
							if (s1[0] == L'c' || s1[0] == L'C') {
								cv.Remove(mang, dem);
								wcout << L"Đã xóa hồ sơ của các bệnh nhân!\n";
							}
							else wcout << L"Đã hủy xóa hồ sơ của các bệnh nhân!\n";
							break;
						}
					}
				} while (1);
			}
		}
		if (mang != nullptr)delete[] mang;
		break;
	}
	}
}
void QLHS::xoasach(int loai) {
	switch (loai) {
	case 1: {
		wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                                    NỘI TRÚ                                                                                          │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
		if (nt.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			wcout << L"│                                                               Không có hồ sơ của bệnh nhân nội trú nào để xóa!                                                                      │\n";
			wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			wcout << nt;
			wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┘\n";
			do {
				wstring s1;
				wcout << L"Bạn có chắc chắn muốn xóa hồ sơ của tất cả bệnh nhân nội trú? (c/k)   "; getline(wcin, s1);
				if (s1[0] == L'\0') wcout << L"Vui lòng nhập một kí tự! (c/k)\n";
				else {
					if (s1[1] != L'\0' || (s1[0] != L'c' && s1[0] != L'k' && s1[0] != L'C' && s1[0] != L'K')) wcout << L"Vui lòng chỉ nhập c hay C (có) hoặc k hay K(không)!\n";
					else {
						if (s1[0] == L'c' || s1[0] == L'C') {
							nt.Erase();
							wcout << L"Đã xóa tất cả hồ sơ!\n";
						}
						else wcout << L"Đã hủy xóa tất cả hồ sơ!\n";
						break;
					}
				}
			} while (1);
		}
		break;
	}
	case 2: {
		wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
		if (ngt.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			wcout << L"│                                              Không có hồ sơ của bệnh nhân ngoại trú nào để xóa!                                                  │\n";
			wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			wcout << ngt;
			wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┘\n";
			do {
				wstring s1;
				wcout << L"Bạn có chắc chắn muốn xóa hồ sơ của tất cả bệnh nhân ngoại trú? (c/k)   "; getline(wcin, s1);
				if (s1[0] == L'\0') wcout << L"Vui lòng nhập một kí tự! (c/k)\n";
				else {
					if (s1[1] != L'\0' || (s1[0] != L'c' && s1[0] != L'k' && s1[0] != L'C' && s1[0] != L'K')) wcout << L"Vui lòng chỉ nhập c hay C (có) hoặc k hay K(không)!\n";
					else {
						if (s1[0] == L'c' || s1[0] == L'C') {
							ngt.Erase();
							wcout << L"Đã xóa tất cả hồ sơ!\n";
						}
						else wcout << L"Đã hủy xóa tất cả hồ sơ!\n";
						break;
					}
				}
			} while (1);
		}
		break;
	}
	case 3: {
		wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
		if (cv.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			wcout << L"│                                                Không có hồ sơ của bệnh nhân chuyển viện nào để xóa!                                                   │\n";
			wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n";
		}
		else {
			wcout << cv;
			wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┘\n";
			do {
				wstring s1;
				wcout << L"Bạn có chắc chắn muốn xóa hồ sơ của tất cả bệnh nhân chuyển viện? (c/k)   "; getline(wcin, s1);
				if (s1[0] == L'\0') wcout << L"Vui lòng nhập một kí tự! (c/k)\n";
				else {
					if (s1[1] != L'\0' || (s1[0] != L'c' && s1[0] != L'k' && s1[0] != L'C' && s1[0] != L'K')) wcout << L"Vui lòng chỉ nhập c hay C (có) hoặc k hay K(không)!\n";
					else {
						if (s1[0] == L'c' || s1[0] == L'C') {
							cv.Erase();
							wcout << L"Đã xóa tất cả hồ sơ!\n";
						}
						else wcout << L"Đã hủy xóa tất cả hồ sơ!\n";
						break;
					}
				}
			} while (1);
		}
		break;
	}
	}
}
void QLHS::xuat(int loai) {
	switch (loai) {
	case 4:
	case 1: {
		wcout << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                                     NỘI TRÚ                                                                                         │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
		if (nt.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			wcout << L"│                                                               Không có hồ sơ của bệnh nhân nội trú nào để xuất!                                                                     │\n";
			wcout << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n\n\n";
		}
		else {
			wcout << nt;
			wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┘";
			wcout << endl << endl << endl << endl;
		}
		if (loai == 1)break;
	}
	case 2: {
		wcout << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
		if (ngt.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			wcout << L"│                                              Không có hồ sơ của bệnh nhân ngoại trú nào để xuất!                                                 │\n";
			wcout << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n\n\n";
		}
		else {
			wcout << ngt;
			wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┘";
			wcout << endl << endl << endl << endl;
		}
		if (loai == 2)break;
	}
	case 3: {
		wcout << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		wcout << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
		wcout << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
		wcout << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
		if (cv.Length() == 0) {
			wcout << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			wcout << L"│                                                Không có hồ sơ của bệnh nhân chuyển viện nào để xuất!                                                  │\n";
			wcout << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n\n\n";
		}
		else {
			wcout << cv;
			wcout << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┘\n";
			wcout << endl << endl << endl << endl;
		}
		break;
	}
	}
}
void QLHS::xuatfile(int loai) {
	wofstream file; wstring s;
	switch (loai) {
	case 1: {
		wcout << L"Nhập tên file output nội trú:   "; getline(wcin, s);
		file.open(s, ios::app);
		locale loc(locale(), new codecvt_utf8<wchar_t>);
		file.imbue(loc);
		file << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		file << L"│                                                                                     NỘI TRÚ                                                                                         │\n";
		file << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
		file << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
		if (nt.Length() == 0) {
			file << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			file << L"│                                                               Không có hồ sơ của bệnh nhân nội trú nào để xuất!                                                                     │\n";
			file << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n\n\n";
		}
		else {
			file << nt;
			file << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┘";
			file << endl << endl << endl << endl;
		}
		break;
	}
	case 2: {
		wcout << L"Nhập tên file output ngoại trú:   "; getline(wcin, s);
		file.open(s, ios::app);
		locale loc(locale(), new codecvt_utf8<wchar_t>);
		file.imbue(loc);
		file << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		file << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
		file << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
		file << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
		if (ngt.Length() == 0) {
			file << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			file << L"│                                              Không có hồ sơ của bệnh nhân ngoại trú nào để xuất!                                                 │\n";
			file << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n\n\n";
		}
		else {
			file << ngt;
			file << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┘";
			file << endl << endl << endl << endl;
		}
		break;
	}
	case 3: {
		wcout << L"Nhập tên file output chuyển viện:   "; getline(wcin, s);
		file.open(s, ios::app);
		locale loc(locale(), new codecvt_utf8<wchar_t>);
		file.imbue(loc);
		file << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		file << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
		file << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
		file << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
		if (cv.Length() == 0) {
			file << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			file << L"│                                                Không có hồ sơ của bệnh nhân chuyển viện nào để xuất!                                                  │\n";
			file << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n\n\n";
		}
		else {
			file << cv;
			file << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┘";
			file << endl << endl << endl << endl;
		}
		break;
	}
	case 4: {
		wcout << L"Nhập tên file output:   "; getline(wcin, s);
		file.open(s, ios::app);
		locale loc(locale(), new codecvt_utf8<wchar_t>);
		file.imbue(loc);
		file << L"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		file << L"│                                                                                     NỘI TRÚ                                                                                         │\n";
		file << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬────────────────┬──────────────┬────────────────────────────────────────┬───────────┤\n";
		file << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │ Ngày nhập viện │ Ngày ra viện │                  Khoa                  │ Số giường │\n";
		if (nt.Length() == 0) {
			file << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┤\n";
			file << L"│                                                               Không có hồ sơ của bệnh nhân nội trú nào để xuất!                                                                     │\n";
			file << L"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n\n\n";
		}
		else {
			file << nt;
			file << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴────────────────┴──────────────┴────────────────────────────────────────┴───────────┘";
			file << endl << endl << endl << endl;
		}
		file << L"┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		file << L"│                                                                   NGOẠI TRÚ                                                                      │\n";
		file << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────┬──────────────┤\n";
		file << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │   Ngày khám   │ Số bảo hiểm y tế │    Mã toa    │\n";
		if (ngt.Length() == 0) {
			file << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┤\n";
			file << L"│                                              Không có hồ sơ của bệnh nhân ngoại trú nào để xuất!                                                 │\n";
			file << L"└──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n\n\n";
		}
		else {
			file << ngt;
			file << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────┴──────────────┘";
			file << endl << endl << endl << endl;
		}
		file << L"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
		file << L"│                                                                       CHUYỂN VIỆN                                                                     │\n";
		file << L"├────────────┬──────────────────────────────────────┬─────────────────┬──────────────────────────┬───────────────┬──────────────────────────────────────┤\n";
		file << L"│  Mã hồ sơ  │                Họ tên                │    Ngày sinh    │        Chuẩn đoán        │  Ngày chuyển  │              Nơi chuyển              │\n";
		if (cv.Length() == 0) {
			file << L"├────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┤\n";
			file << L"│                                                Không có hồ sơ của bệnh nhân chuyển viện nào để xuất!                                                  │\n";
			file << L"└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n\n\n\n";
		}
		else {
			file << cv;
			file << L"└────────────┴──────────────────────────────────────┴─────────────────┴──────────────────────────┴───────────────┴──────────────────────────────────────┘";
			file << endl << endl << endl << endl;
		}
		break;
	}
	}
}

