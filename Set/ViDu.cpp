#include <iostream>
#include <set>

int main()
{
    // Tạo mảng 1 và mảng 2
    int mang1[] = {1, 2, 3, 4, 5};
    int mang2[] = {4, 5, 6, 7, 8};

    std::set<int> tapHop1;
    std::set<int> tapHop2;

    // Lưu trữ mảng 1 vào tapHop1 bằng cách sử dụng phương thức insert()
    for (const auto &phanTu : mang1)
    {
        tapHop1.insert(phanTu);
    }

    // Lưu trữ mảng 2 vào tapHop2 bằng cách sử dụng phương thức insert()
    for (const auto &phanTu : mang2)
    {
        tapHop2.insert(phanTu);
    }

    std::set<int> tapHopChung;
    // Tạo vòng for tìm phẩn tử
    for (const auto &phanTu : tapHop1)
    {
        if (tapHop2.count(phanTu) > 0)
        {
            tapHopChung.insert(phanTu);
        }
    }

    // Xuất ra mản hình
    std::cout << "Cac_phan_tu_chung: ";
    for (const auto &phanTu : tapHopChung)
    {
        std::cout << phanTu << " ";
    }
    std::cout << std::endl;

    return 0;
}