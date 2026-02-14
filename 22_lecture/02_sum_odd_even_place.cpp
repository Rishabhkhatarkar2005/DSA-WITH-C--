#include <iostream>
using namespace std;

int main()
{
    int N;
    int digit;
    int oddSum = 0, evenSum = 0;
    int position = 1;

    cin >> N;

    for (; N > 0; N = N / 10)
    {
        digit = N % 10;

        if (position % 2 == 0)
            evenSum = evenSum + digit;
        else
            oddSum = oddSum + digit;

        position++;
    }

    cout << oddSum << endl;
    cout << evenSum << endl;

    return 0;
}
