#include <iostream>
using namespace std;

const int SIZE = 10;
string Data[SIZE] = {""};

int hashFunction(int key)
{
    return key % SIZE;
}

void insert(string data[], int key, string value)
{
    int index = hashFunction(key);
    int originalIndex = index;

    // Kĩ thuật linear probing để xử lí trường hợp hash collision
    while (!data[index].empty())
    {
        index = (index + 1) % SIZE;
        if (index == originalIndex)
        {
            cout << "Hash map is full. Unable to insert." << endl;
            return;
        }
    }

    data[index] = value;
}

string get(string data[], int key)
{
    int index = hashFunction(key);
    return data[index];
}

int main()
{
    insert(Data, 1, "Minh");
    insert(Data, 2, "Tai");
    insert(Data, 3, "Linh");
    cout << "Value of key 2: ";
    cout << get(Data, 2) << endl;
    return 0;
}
