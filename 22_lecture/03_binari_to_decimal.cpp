#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int sum = 0, g = 0;
    while (N > 0)
    {
        int k = N % 10;
        sum = sum + k * pow(2, g);
        N = N / 10;
        g++;
    }
    cout << sum;
    return 0;
}