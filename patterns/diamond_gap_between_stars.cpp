#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter odd number: ";
    cin >> n;

    int mid = n / 2;

    for (int i = 0; i < n; i++) {          // row loop
        for (int j = 0; j < n; j++) {      // column loop

            int stars;
            if (i <= mid)
                stars = mid - i + 1;
            else
                stars = i - mid + 1;

            if (i == 0 || i == n - 1 || j < stars || j >= n - stars)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
