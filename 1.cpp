#include <iostream>
using namespace std;
int main() {
    double I = 0;
    double bonus = 0;
    cin >> I;
    if (I < 10)
    {
        bonus = I * 0.1;
        cout << "发放奖金总数为：" << bonus << endl;
    }
    else if (I >= 10 && I < 20)
    {
        bonus = (I - 10) * 0.075 + 1;
        cout << "发放奖金总数为：" << bonus << endl;
    }
    else if (I >= 20 && I < 40)
    {
        bonus = (I - 20) * 0.05 + 1.75;
        cout << "发放奖金总数为：" << bonus << endl;
    }
    else if (I >= 40 && I < 60)
    {
        bonus = (I - 40) * 0.03 +2.75;
        cout << "发放奖金总数为：" << bonus << endl;
    }
    else if (I >= 60 && I < 100)
    {
        bonus = (I - 60) * 0.015 + 3.35;
        cout << "发放奖金总数为：" << bonus << endl;
    }
    else if (I >= 100)
    {
        bonus = (I - 100) * 0.01 + 3.95;
        cout << "发放奖金总数为：" << bonus << endl;
    }
    else
    {
    }

    return 0;
}