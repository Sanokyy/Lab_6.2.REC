
#include <iostream>
using namespace std;

int CountOdd(int a[], int n, int i)
{
    if (i == n)
    {
        return 0;
    }

    int number = a[i];

    if (number % 2 != 0)
    {
        return 1 + CountOdd(a, n, i + 1);
    }
    else
    {
        return CountOdd(a, n, i + 1);
    }
}

int main()
{
    int a[6] = { 2, 7, 4, 9, -3, 8 };

    int result = CountOdd(a, 6, 0);

    cout << "Count = " << result << endl;

    return 0;
}
