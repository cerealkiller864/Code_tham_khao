#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> ten_tuoi;
    ten_tuoi.insert({"Minh", 18});
    ten_tuoi.insert({"Tai", 18});

    ten_tuoi.erase("Minh");
    cout << ten_tuoi["Minh"] << endl;
    cout << ten_tuoi["Tai"]  << endl;
    cout << ten_tuoi.size()  << endl;
    return 0;
}