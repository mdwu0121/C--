#include <iostream>
using namespace std;

int main() {
    int num = 100;
    do
    {
        int a1 = num / 100;
        int a2 = num / 10;
        int a3 = a2 % 10;
        int a4 = num % 10;
        if (num == a1*a1*a1 + a3*a3*a3 + a4*a4*a4)
        {
            cout << num << endl;
        }
        num++; 

    } while (num < 1000);

    system("pause");
    return 0;
}    