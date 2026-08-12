#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {          // rows
        for (int j = 0; j < n; j++) {      // columns

            if (
                i == 0 || i == n - 1 ||               // top & bottom
                (i <= n/2 && (j == i || j == n - i - 1)) ||   // upper diagonals
                (i > n/2 && (j == n - i - 1 || j == i))       // lower diagonals
               )
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
