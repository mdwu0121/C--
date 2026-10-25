#include <iostream>
using namespace std;
int main() {
    int month = 0;
    cin >> month;
    int num = 2;
    for (int i = 1; i <= (month / 3); i++)
    {
        num *= 2;
    }
    cout << "第" << month << "个月的兔子总数是" << num << endl;
    return 0;
} 