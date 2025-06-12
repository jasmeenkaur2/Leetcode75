#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> LP(n, 1);  // Left product array
        vector<int> RP(n, 1);  // Right product array
        vector<int> result(n); // Final result

        // Fill left product array
        for (int i = 1; i < n; i++)
        {
            LP[i] = LP[i - 1] * nums[i - 1];
        }

        // Fill right product array
        for (int i = n - 2; i >= 0; i--)
        {
            RP[i] = RP[i + 1] * nums[i + 1];
        }

        // Multiply left and right products to get result
        for (int i = 0; i < n; i++)
        {
            result[i] = LP[i] * RP[i];
        }

        return result;
    }
};

// Example usage
int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);

    cout << "Output: [";
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i];
        if (i != result.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
