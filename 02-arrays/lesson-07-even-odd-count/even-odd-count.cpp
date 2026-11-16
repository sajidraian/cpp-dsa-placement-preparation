#include <iostream>
using namespace std;

int main() {
    int numbers[6];
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter 6 numbers: ";

    for (int i = 0; i < 6; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 6; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount;

    return 0;
}
