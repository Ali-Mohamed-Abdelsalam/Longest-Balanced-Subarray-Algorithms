#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void solveLinearRecursive(const vector<int>& arr,
                          int index,
                          int prefixSum,
                          unordered_map<int, int>& firstOccurrence,
                          int& maxLength)
{
    if (index == arr.size())
    {
        return;
    }
    prefixSum += (arr[index] == 0 ? -1 : 1);
    if (firstOccurrence.count(prefixSum))
    {
        int currentLength = index - firstOccurrence[prefixSum];
        maxLength = max(maxLength, currentLength);
    }
    else
    {
        firstOccurrence[prefixSum] = index;
    }
    solveLinearRecursive(arr, index + 1, prefixSum, firstOccurrence, maxLength);
}

int longestSubarray_RecursiveOn(const vector<int>& arr)
{

    if (arr.empty()) return 0;
    unordered_map<int, int> firstOccurrence;
    firstOccurrence[0] = -1;
    int maxLength = 0;
    solveLinearRecursive(arr, 0, 0, firstOccurrence, maxLength);
    return maxLength;

}
int main()
{

    vector<int> arr = {0,0,0,1,1,0,0,0,0,1,0,1,0};
    cout << "   Recursive Algorithm (Linear O(n))       " << endl;
    cout << "Input Array: [0,0,0,1,1,0,0,0,0,1,0,1,0]" << endl;
    int result = longestSubarray_RecursiveOn(arr);
    cout << "Longest Balanced Subarray Length: " << result << endl;
    return 0;
}
