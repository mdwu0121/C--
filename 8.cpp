#include <iostream>
using namespace std;
int main() {
    int peaches = 1;
    for (int i = 1; i < 10; i++)
    {
        peaches = (peaches + 1) * 2;
    }
    cout << "第一天一共摘了" << peaches << "个桃子" << endl;
    system("pause");
    return 0;
} 