#include "QLHS.h"
#include "Console.h"
int main() {
    wstring cumTu; long long bk, j, i;
    QLHS ql;
    j = _setmode(_fileno(stdin), _O_U16TEXT);
    j = _setmode(_fileno(stdout), _O_U16TEXT);
    int k = 10;
    gotoXY(50, k);
    wcout << L"Nhấn phím enter để bắt đầu!   ";
    while (1) {
        int key = _getch();
        if (key == 13)break;
    }
    do {
        system("cls");
        wstring s[10] = { L"===========HỒ SƠ BỆNH ÁN===========", L"HÃY CHỌN CHỨC NĂNG BẠN CẦN:", L"   1.Thêm hồ sơ", L"   2.Cập nhật hồ sơ", L"   3.Tìm hồ sơ" , L"   4.Sắp xếp hồ sơ", L"   5.Tính số hồ sơ có ngày sinh lớn hơn ngày sinh X", L"   6.Xóa hồ sơ", L"   7.Xuất hồ sơ", L"   8.Thoát" };
        j = menu0(s, 10, 2);
        system("cls");
        switch (j) {
        case 1: {
            do {
                system("cls");
                wstring s[5] = { L"====THÊM HỒ SƠ====", L"   1.Thêm hồ sơ vào đầu danh sách", L"   2.Thêm hồ sơ vào cuối danh sách", L"   3.Chèn hồ sơ ngay sau một mã hồ sơ", L"   4.Thoát" };
                j = menu0(s, 5, 1);
                system("cls");
                switch (j) {
                case 1: {
                    do {
                        system("cls");
                        wstring s[4] = { L"====THÊM HỒ SƠ  VÀO ĐẦU DANH SÁCH====", L"   1.Từ file", L"   2.Từ bàn phím", L"   3.Thoát" };
                        i = menu0(s, 4, 1);
                        system("cls");
                        switch (i)
                        {
                        case 1: {
                            do {
                                system("cls");
                                wstring s[7] = { L"====TỪ FILE====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Tất cả", L"   5.Thoát" };
                                j = menu0(s, 7, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.nhapfile(1, 1);
                                    Sleep(1000);
                                    break;
                                }
                                case 2: {
                                    ql.nhapfile(2, 1);
                                    Sleep(1000);
                                    break;
                                }
                                case 3: {
                                    ql.nhapfile(3, 1);
                                    Sleep(1000);
                                    break;
                                }
                                case 4: {
                                    ql.nhapfile(4, 1);
                                    Sleep(1000);
                                    break;
                                }
                                case 5: break;
                                }
                            } while (j != 5);
                            break;
                        }
                        case 2: {
                            do {
                                system("cls");
                                wstring s[6] = { L"====TỪ BÀN PHÍM====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Thoát" };
                                j = menu0(s, 6, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.nhap(1, 1);
                                    Sleep(1000);
                                    break;
                                }
                                case 2: {
                                    ql.nhap(2, 1);
                                    Sleep(1000);
                                    break;
                                }
                                case 3: {
                                    ql.nhap(3, 1);
                                    Sleep(1000);
                                    break;
                                }
                                case 4: {
                                    break;
                                }
                                }
                            } while (j != 4);
                            break;
                        }
                        case 3: break;
                        }
                    } while (i != 3);
                    break;
                }
                case 2: {
                    do {
                        system("cls");
                        wstring s[4] = { L"====THÊM HỒ SƠ VÀO CUỐI DANH SÁCH====", L"   1.Từ file", L"   2.Từ bàn phím", L"   3.Thoát" };
                        i = menu0(s, 4, 1);
                        system("cls");
                        switch (i)
                        {
                        case 1: {
                            do {
                                system("cls");
                                wstring s[7] = { L"====TỪ FILE====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Tất cả", L"   5.Thoát" };
                                j = menu0(s, 7, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.nhapfile(1, 2);
                                    Sleep(1000);
                                    break;
                                }
                                case 2: {
                                    ql.nhapfile(2, 2);
                                    Sleep(1000);
                                    break;
                                }
                                case 3: {
                                    ql.nhapfile(3, 2);
                                    Sleep(1000);
                                    break;
                                }
                                case 4: {
                                    ql.nhapfile(4, 2);
                                    Sleep(1000);
                                    break;
                                }
                                case 5: break;
                                }
                            } while (j != 5);
                            break;
                        }
                        case 2: {
                            do {
                                system("cls");
                                wstring s[6] = { L"====TỪ BÀN PHÍM====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Thoát" };
                                j = menu0(s, 6, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.nhap(1, 2);
                                    Sleep(1000);
                                    break;
                                }
                                case 2: {
                                    ql.nhap(2, 2);
                                    Sleep(1000);
                                    break;
                                }
                                case 3: {
                                    ql.nhap(3, 2);
                                    Sleep(1000);
                                    break;
                                }
                                case 4: {
                                    break;
                                }
                                }
                            } while (j != 4);
                            break;
                        }
                        case 3: break;
                        }
                    } while (i != 3);
                    break;
                }
                case 3: {
                    do {
                        system("cls");
                        wstring s[6] = { L"====CHÈN HỒ SƠ====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Thoát" };
                        j = menu0(s, 6, 2);
                        system("cls");
                        switch (j) {
                        case 1:
                        {
                            ql.chen(1);
                            Sleep(1000);
                            break;
                        }
                        case 2:
                        {
                            ql.chen(2);
                            Sleep(1000);
                            break;
                        }
                        case 3:
                        {
                            ql.chen(3);
                            Sleep(1000);
                            break;
                        }
                        case 4: break;
                        }
                    } while (j != 4);
                    break;
                }
                case 4: {
                    break;
                }
                }
            } while (j != 4);
            break;
        }
        case 2: {
            do {
                system("cls");
                wstring s[7] = { L"====CẬP NHẬT HỒ SƠ====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Tất cả", L"   5.Thoát" };
                j = menu0(s, 7, 2);
                system("cls");
                switch (j) {
                case 1: {
                    do {
                        system("cls");
                        wstring s[12] = { L"====CẬP NHẬT HỒ SƠ NỘI TRÚ====", L"Cập nhật thuộc tính:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày nhập viện", L"   6.Ngày ra viện", L"   7.Khoa", L"   8.Số giường", L"   9.Tất cả", L"   10.Thoát" };
                        j = menu0(s, 12, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 0, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 1, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 2, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 4: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 3, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 5: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 4, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 6: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 5, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 7: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 6, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 8: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 7, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 9: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 8, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 10: break;
                        }
                    } while (j != 10);
                    break;
                }
                case 2: {
                    do {
                        system("cls");
                        wstring s[11] = { L"====CẬP NHẬT HỒ SƠ NGOẠI TRÚ====", L"Cập nhật thuộc tính:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày khám", L"   6.Số bảo hiểm y tế", L"   7.Mã toa", L"   8.Tất cả", L"   9.Thoát" };
                        j = menu0(s, 11, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(2, 0, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(2, 1, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(2, 2, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 4: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(2, 3, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 5: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(2, 4, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 6: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(2, 5, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 7: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(2, 6, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 8: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(2, 7, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 9: break;
                        }
                    } while (j != 9);
                    break;
                }
                case 3: {
                    do {
                        system("cls");
                        wstring s[10] = { L"====CẬP NHẬT HỒ SƠ CHUYỂN VIỆN====", L"Cập nhật thuộc tính:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày chuyển", L"   6.Nơi chuyển", L"   7.Tất cả", L"   8.Thoát" };
                        j = menu0(s, 10, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(3, 0, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(3, 1, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(3, 2, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 4: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(3, 3, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 5: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(3, 4, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 6: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(3, 5, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 7: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(3, 6, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 8: break;
                        }
                    } while (j != 8);
                    break;
                }
                case 4: {
                    do {
                        system("cls");
                        wstring s[8] = { L"====CẬP NHẬT TẤT CẢ HỒ SƠ====", L"Cập nhật thuộc tính:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Tất cả", L"   6.Thoát" };
                        i = menu0(s, 8, 2);
                        system("cls");
                        switch (i) {
                        case 1: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 0, s);
                            ql.capnhat(2, 0, s);
                            ql.capnhat(3, 0, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 1, s);
                            ql.capnhat(2, 1, s);
                            ql.capnhat(3, 1, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 2, s);
                            ql.capnhat(2, 2, s);
                            ql.capnhat(3, 2, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 4: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 3, s);
                            ql.capnhat(2, 3, s);
                            ql.capnhat(3, 3, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 5: {
                            wstring s;
                            wcout << L"Nhập mã hồ sơ của bệnh nhân mà bạn muốn cập nhật:   "; getline(wcin, s);
                            ql.capnhat(1, 8, s);
                            ql.capnhat(2, 7, s);
                            ql.capnhat(3, 6, s);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 6:break;
                        }
                    } while (i != 6);
                    break;
                }
                case 5:break;
                }
            } while (j != 5);
            break;
        }
        case 3: {
            do {
                system("cls");
                wstring s[7] = { L"====TÌM HỒ SƠ====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Tất cả", L"   5.Thoát" };
                j = menu0(s, 7, 2);
                system("cls");
                switch (j) {
                case 1: {
                    do {
                        system("cls");
                        wstring s[11] = { L"====TÌM TRONG HỒ SƠ NỘI TRÚ====", L"Tìm theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày nhập viện", L"   6.Ngày ra viện", L"   7.Khoa", L"   8.Số giường", L"   9.Thoát" };
                        j = menu0(s, 11, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            wcout << L"Nhập cụm từ trong mã hồ sơ: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 1);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            wcout << L"Nhập cụm từ trong họ tên: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 2);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            wcout << L"Nhập cụm từ trong ngày sinh: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 3);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 4: {
                            wcout << L"Nhập cụm từ trong chuẩn đoán: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 4);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 5: {
                            wcout << L"Nhập cụm từ trong ngày nhập viện: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 5);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 6: {
                            wcout << L"Nhập cụm từ trong ngày ra viện: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 6);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 7: {
                            wcout << L"Nhập cụm từ trong khoa: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 7);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 8: {
                            wcout << L"Nhập vào số giường: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 8);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 9: break;
                        }
                    } while (j != 9);
                    break;
                }
                case 2: {
                    do {
                        system("cls");
                        wstring s[10] = { L"====TÌM TRONG HỒ SƠ NGOẠI TRÚ====", L"Tìm theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày khám", L"   6.Số bảo hiểm y tế", L"   7.Mã toa", L"   8.Thoát" };
                        j = menu0(s, 10, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            wcout << L"Nhập cụm từ trong mã hồ sơ: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 2, 1);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            wcout << L"Nhập cụm từ trong họ tên: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 2, 2);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            wcout << L"Nhập cụm từ trong ngày sinh: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 2, 3);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 4: {
                            wcout << L"Nhập cụm từ trong chuẩn đoán: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 2, 4);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 5: {
                            wcout << L"Nhập cụm từ trong ngày khám: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 2, 5);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 6: {
                            wcout << L"Nhập cụm từ trong số bảo hiểm y tế: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 2, 6);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 7: {
                            wcout << L"Nhập cụm từ trong mã Toa: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 2, 7);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 8: break;
                        }
                    } while (j != 8);
                    break;
                }
                case 3: {
                    do {
                        system("cls");
                        wstring s[9] = { L"====TÌM TRONG HỒ SƠ CHUYỂN VIỆN====", L"Tìm theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày chuyển", L"   6.Nơi chuyển", L"   7.Thoát" };
                        j = menu0(s, 9, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            wcout << L"Nhập cụm từ trong mã hồ sơ: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 3, 1);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            wcout << L"Nhập cụm từ trong họ tên: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 3, 2);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            wcout << L"Nhập cụm từ trong ngày sinh: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 3, 3);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 4: {
                            wcout << L"Nhập cụm từ trong chuẩn đoán: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 3, 4);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 5: {
                            wcout << L"Nhập cụm từ trong ngày chuyển: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 3, 5);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 6: {
                            wcout << L"Nhập cụm từ trong nơi chuyển: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 3, 6);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 7: break;
                        }
                    } while (j != 7);
                    break;
                }
                case 4: {
                    do {
                        system("cls");
                        wstring s[7] = { L"====TÌM TRONG TẤT CẢ HỒ SƠ====", L"Tìm theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Thoát" };
                        i = menu0(s, 7, 2);
                        system("cls");
                        switch (i) {
                        case 1: {
                            wcout << L"Nhập cụm từ trong mã hồ sơ: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 1);
                            ql.tim(cumTu, 2, 1);
                            ql.tim(cumTu, 3, 1);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            wcout << L"Nhập cụm từ trong họ tên: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 2);
                            ql.tim(cumTu, 2, 2);
                            ql.tim(cumTu, 3, 2);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            wcout << L"Nhập cụm từ trong ngày sinh: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 3);
                            ql.tim(cumTu, 2, 3);
                            ql.tim(cumTu, 3, 3);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 4: {
                            wcout << L"Nhập cụm từ trong chuẩn đoán: ";
                            getline(wcin, cumTu);
                            ql.tim(cumTu, 1, 4);
                            ql.tim(cumTu, 2, 4);
                            ql.tim(cumTu, 3, 4);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 5:break;
                        }
                    } while (i != 5);
                    break;
                }
                case 5:break;
                }
            } while (j != 5);
            break;
        }
        case 4: {
            do {
                system("cls");
                wstring s[7] = { L"====SẮP XẾP HỒ SƠ====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Tất cả", L"   5.Thoát" };
                j = menu0(s, 7, 2);
                system("cls");
                switch (j) {
                case 1: {
                    do {
                        system("cls");
                        wstring s[5] = { L"====SẮP XẾP HỒ SƠ NỘI TRÚ====", L"Theo chiều:", L"   1.Tăng dần", L"   2.Giảm dần", L"   3.Thoát" };
                        j = menu0(s, 5, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            do {
                                system("cls");
                                wstring s[11] = { L"====SẮP XẾP TĂNG DẦN HỒ SƠ NỘI TRÚ====", L"Sắp xếp theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày nhập viện", L"   6.Ngày ra viện", L"   7.Khoa", L"   8.Số giường", L"   9.Thoát" };
                                j = menu0(s, 11, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.sapxep(1, 1, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 2: {
                                    ql.sapxep(1, 2, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 3: {
                                    ql.sapxep(1, 3, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 4: {
                                    ql.sapxep(1, 4, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 5: {
                                    ql.sapxep(1, 5, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 6: {
                                    ql.sapxep(1, 6, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 7: {
                                    ql.sapxep(1, 7, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 8: {
                                    ql.sapxep(1, 8, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 9:break;
                                }
                            } while (j != 9);
                            break;
                        }
                        case 2: {
                            do {
                                system("cls");
                                wstring s[11] = { L"====SẮP XẾP GIẢM DẦN HỒ SƠ NỘI TRÚ====", L"Sắp xếp theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày nhập viện", L"   6.Ngày ra viện", L"   7.Khoa", L"   8.Số giường", L"   9.Thoát" };
                                j = menu0(s, 11, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.sapxep(1, 1, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 2: {
                                    ql.sapxep(1, 2, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 3: {
                                    ql.sapxep(1, 3, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 4: {
                                    ql.sapxep(1, 4, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 5: {
                                    ql.sapxep(1, 5, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 6: {
                                    ql.sapxep(1, 6, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 7: {
                                    ql.sapxep(1, 7, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 8: {
                                    ql.sapxep(1, 8, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 9:break;
                                }
                            } while (j != 9);
                            break;
                        }
                        case 3:break;
                        }
                    } while (j != 3);
                    break;
                }
                case 2: {
                    do {
                        system("cls");
                        wstring s[5] = { L"====SẮP XẾP HỒ SƠ NGOẠI TRÚ====", L"Theo chiều:", L"   1.Tăng dần", L"   2.Giảm dần", L"   3.Thoát" };
                        j = menu0(s, 5, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            do {
                                system("cls");
                                wstring s[10] = { L"====SẮP XẾP TĂNG DẦN HỒ SƠ NGOẠI TRÚ====", L"Sắp xếp theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày khám", L"   6.Số bảo hiểm y tế", L"   7.Mã toa", L"   8.Thoát" };
                                j = menu0(s, 10, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.sapxep(2, 1, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 2: {
                                    ql.sapxep(2, 2, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 3: {
                                    ql.sapxep(2, 3, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 4: {
                                    ql.sapxep(2, 4, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 5: {
                                    ql.sapxep(2, 5, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 6: {
                                    ql.sapxep(2, 6, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 7: {
                                    ql.sapxep(2, 7, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 8: {
                                    break;
                                }
                                }
                            } while (j != 8);
                            break;
                        }
                        case 2: {
                            do {
                                system("cls");
                                wstring s[10] = { L"====SẮP XẾP GIẢM DẦN HỒ SƠ NGOẠI TRÚ====", L"Sắp xếp theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày khám", L"   6.Số bảo hiểm y tế", L"   7.Mã toa", L"   8.Thoát" };
                                j = menu0(s, 10, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.sapxep(2, 1, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 2: {
                                    ql.sapxep(2, 2, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 3: {
                                    ql.sapxep(2, 3, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 4: {
                                    ql.sapxep(2, 4, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 5: {
                                    ql.sapxep(2, 5, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 6: {
                                    ql.sapxep(2, 6, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 7: {
                                    ql.sapxep(2, 7, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 8: {
                                    break;
                                }
                                }
                            } while (j != 8);
                            break;
                        }
                        case 3:break;
                        }
                    } while (j != 3);
                    break;
                }
                case 3: {
                    do {
                        system("cls");
                        wstring s[5] = { L"====SẮP XẾP HỒ SƠ CHUYỂN VIỆN====", L"Theo chiều:", L"   1.Tăng dần", L"   2.Giảm dần", L"   3.Thoát" };
                        j = menu0(s, 5, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            do {
                                system("cls");
                                wstring s[9] = { L"====SẮP XẾP TĂNG DẦN HỒ SƠ CHUYỂN VIỆN====", L"Sắp xếp theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày chuyển", L"   6.Nơi chuyển", L"   7.Thoát" };
                                j = menu0(s, 9, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.sapxep(3, 1, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 2: {
                                    ql.sapxep(3, 2, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 3: {
                                    ql.sapxep(3, 3, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 4: {
                                    ql.sapxep(3, 4, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 5: {
                                    ql.sapxep(3, 5, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 6: {
                                    ql.sapxep(3, 6, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 7: {
                                    break;
                                }
                                }
                            } while (j != 7);
                            break;
                        }
                        case 2: {
                            do {
                                system("cls");
                                wstring s[9] = { L"====SẮP XẾP GIẢM DẦN HỒ SƠ CHUYỂN VIỆN====", L"Sắp xếp theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày chuyển", L"   6.Nơi chuyển", L"   7.Thoát" };
                                j = menu0(s, 9, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.sapxep(3, 1, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 2: {
                                    ql.sapxep(3, 2, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 3: {
                                    ql.sapxep(3, 3, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 4: {
                                    ql.sapxep(3, 4, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 5: {
                                    ql.sapxep(3, 5, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 6: {
                                    ql.sapxep(3, 6, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 7: {
                                    break;
                                }
                                }
                            } while (j != 7);
                            break;
                        }
                        case 3:break;
                        }
                    } while (j != 3);
                    break;
                }
                case 4: {
                    do {
                        system("cls");
                        wstring s[5] = { L"====SẮP XẾP TẤT CẢ HỒ SƠ====", L"Theo chiều:", L"   1.Tăng dần", L"   2.Giảm dần", L"   3.Thoát" };
                        j = menu0(s, 5, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            do {
                                system("cls");
                                wstring s[7] = { L"====SẮP XẾP TĂNG DẦN TẤT CẢ HỒ SƠ====", L"Sắp xếp theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Thoát" };
                                j = menu0(s, 7, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.sapxep(1, 1, 0);
                                    ql.sapxep(2, 1, 0);
                                    ql.sapxep(3, 1, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 2: {
                                    ql.sapxep(1, 2, 0);
                                    ql.sapxep(2, 2, 0);
                                    ql.sapxep(3, 2, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 3: {
                                    ql.sapxep(1, 3, 0);
                                    ql.sapxep(2, 3, 0);
                                    ql.sapxep(3, 3, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 4: {
                                    ql.sapxep(1, 4, 0);
                                    ql.sapxep(2, 4, 0);
                                    ql.sapxep(3, 4, 0);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 5: {
                                    break;
                                }
                                }
                            } while (j != 5);
                            break;
                        }
                        case 2: {
                            do {
                                system("cls");
                                wstring s[7] = { L"====SẮP XẾP GIẢM DẦN TẤT CẢ HỒ SƠ====", L"Sắp xếp theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Thoát" };
                                j = menu0(s, 7, 2);
                                system("cls");
                                switch (j) {
                                case 1: {
                                    ql.sapxep(1, 1, 1);
                                    ql.sapxep(2, 1, 1);
                                    ql.sapxep(3, 1, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 2: {
                                    ql.sapxep(1, 2, 1);
                                    ql.sapxep(2, 2, 1);
                                    ql.sapxep(3, 2, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 3: {
                                    ql.sapxep(1, 3, 1);
                                    ql.sapxep(2, 3, 1);
                                    ql.sapxep(3, 3, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 4: {
                                    ql.sapxep(1, 4, 1);
                                    ql.sapxep(2, 4, 1);
                                    ql.sapxep(3, 4, 1);
                                    wcout << L"Nhấn phím enter để quay lại!   ";
                                    while (1) {
                                        if (_kbhit()) {
                                            bk = _getch();
                                            if (bk == 13)break;
                                        }
                                    };
                                    break;
                                }
                                case 5: {
                                    break;
                                }
                                }
                            } while (j != 5);
                            break;
                        }
                        case 3:break;
                        }
                    } while (j != 3);
                    break;
                }
                case 5:break;
                }
            } while (j != 5);
            break;
        }
        case 5: {
            do {
                system("cls");
                wstring s[7] = { L"====TÍNH SỐ HỒ SƠ CÓ NGÀY SINH LỚN HƠN NGÀY SINH X====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Tất cả", L"   5.Thoát" };
                j = menu0(s, 7, 2);
                system("cls");
                switch (j) {
                case 1: {
                    wstring s;
                    wcout << L"Nhập ngày sinh X:   "; getline(wcin, s);
                    ql.tinh(s, 1);
                    wcout << L"Nhấn phím enter để quay lại!  ";
                    while (1) {
                        if (_kbhit()) {
                            bk = _getch();
                            if (bk == 13)break;
                        }
                    }
                    break;
                }
                case 2: {
                    wstring s;
                    wcout << L"Nhập ngày sinh X:   "; getline(wcin, s);
                    ql.tinh(s, 2);
                    wcout << L"Nhấn phím enter để quay lại!  ";
                    while (1) {
                        if (_kbhit()) {
                            bk = _getch();
                            if (bk == 13)break;
                        }
                    }
                    break;
                }
                case 3: {
                    wstring s;
                    wcout << L"Nhập ngày sinh X:   "; getline(wcin, s);
                    ql.tinh(s, 3);
                    wcout << L"Nhấn phím enter để quay lại!  ";
                    while (1) {
                        if (_kbhit()) {
                            bk = _getch();
                            if (bk == 13)break;
                        }
                    }
                    break;
                }
                case 4: {
                    wstring s;
                    wcout << L"Nhập ngày sinh X:   "; getline(wcin, s);
                    ql.tinh(s, 1);
                    ql.tinh(s, 2);
                    ql.tinh(s, 3);
                    wcout << L"Nhấn phím enter để quay lại!  ";
                    while (1) {
                        if (_kbhit()) {
                            bk = _getch();
                            if (bk == 13)break;
                        }
                    }
                    break;
                }
                case 5:break;
                }
            } while (j != 5);
            break;
        }
        case 6: {
            do {
                system("cls");
                wstring s[7] = { L"====XÓA HỒ SƠ====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Tất cả", L"   5.Thoát" };
                j = menu0(s, 7, 2);
                system("cls");
                switch (j) {
                case 1: {
                    do {
                        system("cls");
                        wstring s[12] = { L"====XÓA TRONG HỒ SƠ NỘI TRÚ====", L"Xóa theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày nhập viện", L"   6.Ngày ra viện", L"   7.Khoa", L"   8.Số giường", L"   9.Xóa tất cả", L"   10.Thoát" };
                        j = menu0(s, 12, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            wcout << L"Nhập cụm từ trong mã hồ sơ: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 1);
                            Sleep(1000);
                            break;
                        }
                        case 2: {
                            wcout << L"Nhập cụm từ trong họ tên: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 2);
                            Sleep(1000);
                            break;
                        }
                        case 3: {
                            wcout << L"Nhập cụm từ trong ngày sinh: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 3);
                            Sleep(1000);
                            break;
                        }
                        case 4: {
                            wcout << L"Nhập cụm từ trong chuẩn đoán: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 4);
                            Sleep(1000);
                            break;
                        }
                        case 5: {
                            wcout << L"Nhập cụm từ trong ngày nhập viện: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 5);
                            Sleep(1000);
                            break;
                        }
                        case 6: {
                            wcout << L"Nhập cụm từ trong ngày ra viện: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 6);
                            Sleep(1000);
                            break;
                        }
                        case 7: {
                            wcout << L"Nhập cụm từ trong khoa: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 7);
                            Sleep(1000);
                            break;
                        }
                        case 8: {
                            wcout << L"Nhập vào số giường: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 8);
                            Sleep(1000);
                            break;
                        }
                        case 9: {
                            ql.xoasach(1);
                            Sleep(1000);
                            break;
                        }
                        case 10: break;
                        }
                    } while (j != 10);
                    break;
                }
                case 2: {
                    do {
                        system("cls");
                        wstring s[11] = { L"====XÓA TRONG HỒ SƠ NGOẠI TRÚ====", L"Xóa theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày khám", L"   6.Số bảo hiểm y tế", L"   7.Mã toa", L"   8.Xóa tất cả", L"   9.Thoát" };
                        j = menu0(s, 11, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            wcout << L"Nhập cụm từ trong mã hồ sơ: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 2, 1);
                            Sleep(1000);
                            break;
                        }
                        case 2: {
                            wcout << L"Nhập cụm từ trong họ tên: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 2, 2);
                            Sleep(1000);
                            break;
                        }
                        case 3: {
                            wcout << L"Nhập cụm từ trong ngày sinh: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 2, 3);
                            Sleep(1000);
                            break;
                        }
                        case 4: {
                            wcout << L"Nhập cụm từ trong chuẩn đoán: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 2, 4);
                            Sleep(1000);
                            break;
                        }
                        case 5: {
                            wcout << L"Nhập cụm từ trong ngày khám: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 2, 5);
                            Sleep(1000);
                            break;
                        }
                        case 6: {
                            wcout << L"Nhập cụm từ trong số bảo hiểm y tế: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 2, 6);
                            Sleep(1000);
                            break;
                        }
                        case 7: {
                            wcout << L"Nhập cụm từ trong mã Toa: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 2, 7);
                            Sleep(1000);
                            break;
                        }
                        case 8: {
                            ql.xoasach(2);
                            Sleep(1000);
                            break;
                        }
                        case 9: break;
                        }
                    } while (j != 9);
                    break;
                }
                case 3: {
                    do {
                        system("cls");
                        wstring s[10] = { L"====XÓA TRONG HỒ SƠ CHUYỂN VIỆN====", L"Xóa theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Ngày chuyển", L"   6.Nơi chuyển", L"   7.Xóa tất cả", L"   8.Thoát" };
                        j = menu0(s, 10, 2);
                        system("cls");
                        switch (j) {
                        case 1: {
                            wcout << L"Nhập cụm từ trong mã hồ sơ: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 3, 1);
                            Sleep(1000);
                            break;
                        }
                        case 2: {
                            wcout << L"Nhập cụm từ trong họ tên: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 3, 2);
                            Sleep(1000);
                            break;
                        }
                        case 3: {
                            wcout << L"Nhập cụm từ trong ngày sinh: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 3, 3);
                            Sleep(1000);
                            break;
                        }
                        case 4: {
                            wcout << L"Nhập cụm từ trong chuẩn đoán: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 3, 4);
                            Sleep(1000);
                            break;
                        }
                        case 5: {
                            wcout << L"Nhập cụm từ trong ngày chuyển: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 3, 5);
                            Sleep(1000);
                            break;
                        }
                        case 6: {
                            wcout << L"Nhập cụm từ trong nơi chuyển: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 3, 6);
                            Sleep(1000);
                            break;
                        }
                        case 7: {
                            ql.xoasach(3);
                            Sleep(1000);
                            break;
                        }
                        case 8: break;
                        }
                    } while (j != 8);
                    break;
                }
                case 4: {
                    do {
                        system("cls");
                        wstring s[8] = { L"====XÓA TRONG TẤT CẢ HỒ SƠ====", L"Xóa theo:", L"   1.Mã hồ sơ", L"   2.Họ tên", L"   3.Ngày sinh", L"   4.Chuẩn đoán", L"   5.Xóa tất cả", L"   6.Thoát" };
                        i = menu0(s, 8, 2);
                        system("cls");
                        switch (i) {
                        case 1: {
                            wcout << L"Nhập cụm từ trong mã hồ sơ: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 1);
                            ql.xoa(cumTu, 2, 1);
                            ql.xoa(cumTu, 3, 1);
                            Sleep(1000);
                            break;
                        }
                        case 2: {
                            wcout << L"Nhập cụm từ trong họ tên: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 2);
                            ql.xoa(cumTu, 2, 2);
                            ql.xoa(cumTu, 3, 2);
                            Sleep(1000);
                            break;
                        }
                        case 3: {
                            wcout << L"Nhập cụm từ trong ngày sinh: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 3);
                            ql.xoa(cumTu, 2, 3);
                            ql.xoa(cumTu, 3, 3);
                            Sleep(1000);
                            break;
                        }
                        case 4: {
                            wcout << L"Nhập cụm từ trong chuẩn đoán: ";
                            getline(wcin, cumTu);
                            ql.xoa(cumTu, 1, 4);
                            ql.xoa(cumTu, 2, 4);
                            ql.xoa(cumTu, 3, 4);
                            Sleep(1000);
                            break;
                        }
                        case 5: {
                            ql.xoasach(1);
                            ql.xoasach(2);
                            ql.xoasach(3);
                            Sleep(1000);
                            break;
                        }
                        case 6:break;
                        }
                    } while (i != 6);
                    break;
                }
                case 5:break;
                }
            } while (j != 5);
            break;
        }
        case 7: {
            do {
                system("cls");
                wstring s[4] = { L"====XUẤT HỒ SƠ====", L"   1.Ra file", L"   2.Ra màn hình", L"   3.Thoát" };
                j = menu0(s, 4, 1);
                system("cls");
                switch (j)
                {
                case 1: {
                    do {
                        system("cls");
                        wstring s[7] = { L"====XUẤT HỒ SƠ RA FILE====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Tất cả", L"   5.Thoát" };
                        i = menu0(s, 7, 2);
                        system("cls");
                        switch (i) {
                        case 1: {
                            ql.xuatfile(1);
                            wcout << L"Đã xuất hồ sơ của các bệnh nhân nội trú ra file!\n"; Sleep(1000);
                            break;
                        }
                        case 2: {
                            ql.xuatfile(2);
                            wcout << L"Đã xuất hồ sơ của các bệnh nhân ngoại trú ra file!\n"; Sleep(1000);
                            break;
                        }
                        case 3: {
                            ql.xuatfile(3);
                            wcout << L"Đã xuất hồ sơ của các bệnh nhân chuyển viện ra file!\n"; Sleep(1000);
                            break;
                        }
                        case 4: {
                            ql.xuatfile(4);
                            wcout << L"Đã xuất hồ sơ của tất cả bệnh nhân ra file!\n"; Sleep(1000);
                            break;
                        }
                        case 5:break;
                        }
                    } while (i != 5);
                    break;
                }
                case 2: {
                    do {
                        system("cls");
                        wstring s[7] = { L"====XUẤT HỒ SƠ RA MÀN HÌNH====", L"Hình thức cư trú:", L"   1.Nội trú", L"   2.Ngoại trú", L"   3.Chuyển viện", L"   4.Tất cả", L"   5.Thoát" };
                        i = menu0(s, 7, 2);
                        system("cls");
                        switch (i) {
                        case 1: {
                            ql.xuat(1);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 2: {
                            ql.xuat(2);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 3: {
                            ql.xuat(3);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            };
                            break;
                        }
                        case 4: {
                            ql.xuat(4);
                            wcout << L"Nhấn phím enter để quay lại!  ";
                            while (1) {
                                if (_kbhit()) {
                                    bk = _getch();
                                    if (bk == 13)break;
                                }
                            }
                            break;
                        }
                        case 5:break;
                        }
                    } while (i != 5);
                    break;
                }
                case 3: break;
                }
            } while (j != 3);
            break;
        }
        case 8:break;
        }
    } while (j != 8);
    TextColor(15);
    wcout << L"Kết thúc chương trình! Hẹn gặp lại bạn lần sau!";
    return 0;
}





