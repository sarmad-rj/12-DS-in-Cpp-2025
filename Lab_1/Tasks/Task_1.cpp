#include <iostream>
using namespace std;

int main() {
    int X, start, stop;
    long sum = 0;

    cout << "Enter the value of X: ";
    cin >> X;

    cout << "Enter the starting value: ";
    cin >> start;

    cout << "Enter the stopping value: ";
    cin >> stop;

    if (start > stop) {
        cout << "Starting value must be less than or equal to stopping value." << endl;
        return 1;
    }

    // Calculate ?X2 from start to stop
    for (int i = start; i <= stop; ++i) {
        sum += X * X;
    }

    cout << "The sum of X^2 from " << start << " to " << stop << " is: " << sum << endl;

    return 0;
}
