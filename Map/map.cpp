#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> soLuong; // Sắp xếp các khóa từ bé đến lớn
   
    /* 
    Sắp xếp các khóa từ lớn đến bé:
    map<string, int, std::greater<string>> soLuong
    */

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
