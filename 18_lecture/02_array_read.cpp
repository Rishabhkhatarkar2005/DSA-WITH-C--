#include <iostream>
using namespace std;
int main()
{
    // int arr[5];
    // arr[0]=1;
    // arr[1]=2;
    // arr[3]=3;
    // arr[4]=4;
    // arr[5]=5;
    int array_b[] = {1, 2, 3, 4, 5};
    int s = sizeof(array_b) / sizeof(int);
    for (int i = 0; i < s; i++)
    {
        cout << array_b[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < s; i++)
    {
        cout << array_b[i] << " ";
    }
    for (int i = 0; i < s; i++)
    {
        array_b[i] += i;
    }
    cout << endl;
    for (int i = 0; i < s; i++)
    {
        cout << array_b[i] << " ";
    }
    return 0;
}