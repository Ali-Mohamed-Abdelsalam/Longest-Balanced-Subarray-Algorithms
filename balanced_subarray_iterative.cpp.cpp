#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
int findLongestSubarray_NonRecursive(vector<int> arr) {
    int n = arr.size();


    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) arr[i] = -1;
    }

    unordered_map<int, int> first_occurrence;

    first_occurrence[0] = -1;

    int prefix_sum = 0;
    int max_length = 0;

    for (int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        if (first_occurrence.find(prefix_sum) != first_occurrence.end()) {
            int length = i - first_occurrence[prefix_sum];
            max_length = max(max_length, length);
        } else {
            first_occurrence[prefix_sum] = i;
        }
    }

    return max_length;
}

int main() {
    vector<int> arr = {0,0,0,1,1,0,0,0,0,1,0,1,0};

    cout << "--- Non-Recursive Algorithm---" << endl;
    cout << "Input Array: [0,0,0,1,1,0,0,0,0,1,0,1,0]" << endl;
    cout << "Longest Balanced Subarray Length: " << findLongestSubarray_NonRecursive(arr) << endl;

    return 0;
}
