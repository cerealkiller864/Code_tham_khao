#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, std::string> fruits;

    fruits.insert({1, "Apple"});
    fruits.insert({2, "Banana"});
    fruits.insert({1, "Kiwi"});
    fruits.insert({3, "Cherry"});

    for (auto pair : fruits) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
