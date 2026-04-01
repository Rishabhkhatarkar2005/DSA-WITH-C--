#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        n = (n * (n + 1)) / 2;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        return n - sum;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {3, 0, 1};

    cout << obj.missingNumber(nums);

    return 0;
}