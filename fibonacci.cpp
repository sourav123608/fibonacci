#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int res = 0;
    for (int i = 0; i <= n; i++)
    {
        res = a + b;
        cout << res;
        a = b;
        b = res;
    }
    return 0;
}