#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

static inline int toBalance(int v) { return v == 1 ? 1 : -1; }

int solve(const vector<int>& arr, int lo, int hi) {
    if (lo >= hi) return 0;

    int mid = lo + (hi - lo) / 2;

    int leftAns = solve(arr, lo, mid);
    int rightAns = solve(arr, mid + 1, hi);

    unordered_map<int, int> leftMap;
    int bal = 0;
    for (int i = mid; i >= lo; i--) {
        bal += toBalance(arr[i]);
        if (leftMap.find(bal) == leftMap.end()) {
            leftMap[bal] = i;
        }
    }

    int crossAns = 0;
    bal = 0;
    for (int j = mid + 1; j <= hi; j++) {
        bal += toBalance(arr[j]);
        if (leftMap.count(-bal)) {
            int currentLength = j - leftMap[-bal] + 1;
            crossAns = max(crossAns, currentLength);
        }
    }

    return max({leftAns, rightAns, crossAns});
}

int main() {
    vector<int> arr = {0,0,0,1,1,0,0,0,0,1,0,1,0};

    cout << "--- Recursive Algorithm (O(n log n)) ---" << endl;
    cout << "Input Array: [0,0,0,1,1,0,0,0,0,1,0,1,0]" << endl;

    if (arr.empty()) {
        cout << "Longest Balanced Subarray Length: 0" << endl;
    } else {
        cout << "Longest Balanced Subarray Length: " << solve(arr, 0, arr.size() - 1) << endl;
    }

    return 0;
}
