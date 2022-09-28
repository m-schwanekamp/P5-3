
//P5-3
#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
    int number;
    int digits;

    cout << " Enter a positive number: ";
    cin >> number;
    while ( number > 0) {
        digits = number % 2;
        number = number / 2;
        cout << digits << endl;
    }
    return 0;
}
