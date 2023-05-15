#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countPairsWithSum(vector<int>& arr, int S) {
    // dùng map lưu số lần xuất hiện của mỗi số trong mảng
    unordered_map<int, int> frequency;
    int count = 0;

    for (int i=0; i < arr.size(); i++) {
        int complement = S - arr[i];     // tính phần bù
        count += frequency[complement];
        frequency[ arr[i] ]++;
    }

    return count;
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 6, 5};
    int S = 7;
    int pairCount = countPairsWithSum(arr, S);
    cout << "Number of pairs: " << pairCount << endl;
    return 0;
}



