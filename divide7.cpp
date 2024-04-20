#include <iostream>

// Function to find the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int numbers[10];

    // Accepting 10 numbers from the user
    std::cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }

    // Checking and displaying sum of digits if divisible by 7
    std::cout << "Results:\n";
    for (int i = 0; i < 10; ++i) {
        int sum = sumOfDigits(numbers[i]);
        if (sum % 7 == 0) {
            std::cout << "Sum of digits of " << numbers[i] << " is divisible by 7: " << sum << std::endl;
        } else {
            std::cout << numbers[i] << std::endl;
        }
    }

    return 0;
}
