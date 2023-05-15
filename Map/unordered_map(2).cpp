#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int, std::greater<int>> soLuong;
    soLuong.insert({"IT003.N219", 73});
    soLuong.insert({"IT002.N223", 72});
    soLuong.insert({"IT001.N117", 70});
    soLuong.insert({"IT010.N13", 53});

    for (auto i = soLuong.begin(); i != soLuong.end(); i++)
    {
        cout << i->first << ": " << i->second << endl;
    }

    return 0;
}
