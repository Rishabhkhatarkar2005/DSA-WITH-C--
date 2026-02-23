#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> answer(n, 1);

    // Step 1: Left product
    int left = 1;
    for (int i = 0; i < n; i++)
    {
        answer[i] = left;
        left *= nums[i];
    }

    // Step 2: Right product
    int right = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        answer[i] *= right;
        right *= nums[i];
    }

    return answer;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = productExceptSelf(nums);

    for (int x : result)
        cout << x << " ";

    return 0;
}