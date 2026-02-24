#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a <= 20; a++) {
        for (int b = 1; b <= 20; b++) {
            for (int c = 1; c <= 20; c++) {
                if (a*a + b*b == c*c)
                    cout << a << " " << b << " " << c << endl;
            }
        }
    }
    return 0;
}