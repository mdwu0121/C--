#include <iostream>
using namespace std;
int main() {
    int score = 0;
    cout << "请输入0-10之间的电影评分：" << endl;
    cin >> score;
    switch (score)
    {
        case 10:
            cout << "你认为电影是经典" << endl;
            break;
        case 9:
            cout << "你认为电影是经典" << endl; 
            break;
        case 8:
            cout << "你认为电影非常好" << endl;
            break;
        case 7:
            cout << "你认为电影非常好" << endl;
            break;
        case 6:
            cout << "你认为电影一般" << endl;
            break;
        case 5:
            cout << "你认为电影一般" << endl;
            break;
        default:
            cout << "你认为电影是烂片" << endl;
            break;
    }
    return 0;
}