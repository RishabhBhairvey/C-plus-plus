#include <iostream>

using namespace std;

int main() {
    int num = 2;

    cout << "Prime numbers between 1 and 20: ";

    while (num <= 20) {
        int f=0;
        int i = 2;

        while (i * i <= num) {
            if (num % i == 0) {
                f=1;
                break;
            }
            i++;
        }

        if (f==0) {
            cout << num << " ";
        }
        num++;
    }

    cout << endl;

    return 0;
}
