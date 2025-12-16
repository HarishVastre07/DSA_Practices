#include <iostream>
#include <vector>
using namespace std;

int mostFrequentElement(vector<int>& nums)
{
    int maxNum = 0;
    for (int n : nums) {
        maxNum = max(maxNum, n);
    }

    vector<int> freq(maxNum + 1, 0);

    // Count frequency
    for (int n : nums) {
        freq[n]++;
    }

    int maxFreq = 0;
    int result = 0;

    // Find highest frequency
    for (int i = 0; i < freq.size(); i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    return result;
}

int main()
{
    vector<int> nums = {1,2,2,3,3,4,4};
    cout << "Most Frequent Element: " << mostFrequentElement(nums);
}
