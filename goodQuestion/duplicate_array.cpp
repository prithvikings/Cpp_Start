#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i]==arr[j]) {
                cout<<"It is Dupplicate";
                return 0;
            }
        }
    }
    cout << "No Duplicate found" << endl;
    return 0;
}
