#include <iostream>
using namespace std;

int InvertNumber(int n) {
    int mini = 9;
    int temp = abs(n);
    int count = 0;
    while (temp != 0) {
        int remainder = temp % 10;
        mini = min(mini, remainder);
        count++;
        temp /= 10;
    }
    temp = abs(n);
    int ans = 0;
    int place_value = 1;
    while (count > 0) {
        ans += mini * place_value;
        place_value *= 10;
        count--;
    }

    return ans;
}

int main() {
    int inputNumber;
    cin >> inputNumber;
    cout << InvertNumber(inputNumber) << endl;
    return 0;
}