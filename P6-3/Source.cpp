#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double value;
    double sum = 0.0;
    double sumSq = 0.0;
    int n = 0;

    cout << "Enter numbers (or press Q to quit): ";

    while (cin >> value && value != -999) {
        sum += value;
        sumSq += (value * value);
        n++;
    }

    if (n == 0) {
        cout << "No data to process!" << endl;
        return 0;
    }

    if (n == 1) {
        cout << "Standard deviation requires at least two numbers." << endl;
        return 0;
    }

    double average = sum / n;

    
    double variance = (sumSq - (sum * sum) / n) / (n - 1);
    double stdDev = sqrt(variance);

    cout << "n = " << n << endl;
    cout << "average = " << average << endl;
    cout << "standard deviation = " << stdDev << endl;

    return 0;
}