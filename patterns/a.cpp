#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {2, 7, 11, 15};
    int len = sizeof(a) / sizeof(a[0]);
    int t = 9;

    unordered_set<int> seen;

    for (int i = 0; i < len; i++) {
        int need = t - a[i];

        if (seen.count(need)) {
            cout << need << " " << a[i];
            return 0;
        }

        seen.insert(a[i]);
    }
}
