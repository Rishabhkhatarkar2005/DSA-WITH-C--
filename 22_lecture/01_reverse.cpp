#include <iostream>
using namespace std;

int main()
{
    int N, reverse = 0, digit;

    cin >> N;
    while (N > 0)
    {
        digit = N % 10;
        reverse = reverse * 10 + digit;
        N = N / 10;
    }

    cout << reverse;

    return 0;
}
