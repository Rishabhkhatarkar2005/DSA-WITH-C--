#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> leftproduct(n, 1);
        vector<int> rightproduct(n, 1);
        vector<int> ans(n);

        // left product
        for (int i = 1; i < n; i++)
        {
            leftproduct[i] = leftproduct[i - 1] * nums[i - 1];
        }

        // right product
        for (int i = n - 2; i >= 0; i--)
        {
            rightproduct[i] = rightproduct[i + 1] * nums[i + 1];
        }

        // final answer
        for (int i = 0; i < n; i++)
        {
            ans[i] = leftproduct[i] * rightproduct[i];
        }

        return ans;
    }
};

int main()
{

    vector<int> nums = {1, 2, 3, 4};

    Solution obj;
    vector<int> result = obj.productExceptSelf(nums);

    cout << "Output: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}