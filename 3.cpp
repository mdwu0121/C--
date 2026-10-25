#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    int test = 0;
    while (n != 0)
    {
        int a = n % 10;
        test = test * 10 + a;
        n /= 10;

    }

    if (n == test)
    {
        cout << n << "是回文数" << endl;
    }
    else
    {
        cout << n << "不是回文数" << endl;
    }

    return 0;
}