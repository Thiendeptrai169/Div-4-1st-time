#include <iostream>
#include <vector>
using namespace std;
vector <long long> result;
int main() {
    long long t, k, arr[200001], rs; 
    arr[0] = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cin >> k;
        rs = 0;
        for (int j = 1; j <= k; ++j) {
            cin >> arr[j];
        }
        for (int j = 0; j <= k - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                rs += arr[j + 1] - arr[j];
            }
        }
        result.push_back(rs);
    }
    for (auto i : result) {
        cout << i << endl;
    }
    return 0;
}