#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 0, 2, 9, 3, 8, 3, 7, 4, 6, 4, 2, 4};

    int maxx = *max_element(a.begin(), a.end());  // now safe, since a is initialized

    vector<int> freq_a(maxx + 1, 0);              // to count frequency
    vector<int> pos(maxx + 1, 0);                 // to store position
    vector<int> new_a(a.size());                  // final sorted array

    // Step 1: Count frequency
    for (int i = 0; i < a.size(); i++) {
        freq_a[a[i]]++;
    }

    // Step 2: Create position array (prefix sum)
    pos[0] = freq_a[0];
    for (int i = 1; i <= maxx; i++) {
        pos[i] = pos[i - 1] + freq_a[i];
    }

    // Step 3: Build sorted array (Stable)
    for (int i = a.size() - 1; i >= 0; i--) {
        int temp = a[i];
        new_a[pos[temp] - 1] = temp;
        pos[temp]--;
    }

    // Step 4: Print result
    for (int i = 0; i < new_a.size(); i++) {
        cout << new_a[i] << " ";
    }

    cout << "\n";
}
