#include <iostream>
#include <vector>

using namespace std;

int valueOfX(vector<string>& inputString, int n) {
    int X = 0;
    for (int i = 0; i < n; i++) {
        string temp = inputString[i];
        if (temp == "++X" || temp == "X++" || temp == "++x" || temp == "x++") {
            ++X;
        } else {
            X--;
        }
    }
    return X;
}

int main() {
    int inputCount;
    cin >> inputCount;

    vector<string> inputString(inputCount);
    for (int i = 0; i < inputCount; i++) {
        cin >> inputString[i];
    }

    cout << valueOfX(inputString, inputCount) << endl;

    return 0;
}
