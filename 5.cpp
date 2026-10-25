#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int a = 0;
    cin >> n >> a;
    int a1 = a;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a;
        a = a * 10 + a1;
    }
    cout << sum << endl;
    return 0;
}