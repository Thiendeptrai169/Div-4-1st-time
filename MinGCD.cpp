#include <iostream>
#include <vector>
using namespace std;
vector <int> result;
int main() {
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cin >> n;
        int temp = n / 2;
        result.push_back(temp);
    }
    for (auto i : result) {
        cout << i << endl;
    }
    return 0;
}