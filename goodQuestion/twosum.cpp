#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int target = 9;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "No such pair found" << endl;
    return 0;
}
