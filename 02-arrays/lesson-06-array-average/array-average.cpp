#include <iostream>
using namespace std;

int main() {
    int marks[5] = {60, 70, 80, 90, 100};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }

    float average = (float)sum / 5;

    cout << "Average: " << average;

    return 0;
}
