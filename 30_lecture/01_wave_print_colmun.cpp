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

    // snake column print
    for (int j = 0; j < c; j++)
    {

        // even column → top to bottom
        if (j % 2 == 0)
        {
            for (int i = 0; i < r; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        // odd column → bottom to top
        else
        {
            for (int i = r - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}