#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> arr(r, vector<int>(c));

    // input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int left = 0, right = c - 1;
    int top = 0, bottom = r - 1;

    // spiral print
    while (left <= right && top <= bottom)
    {
        // top row
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // right column
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // bottom row
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        // left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }

    return 0;
}