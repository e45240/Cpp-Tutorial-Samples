// Calculating n! using recursive function calls.

#include <iostream>

using namespace std;

unsigned int factorial(unsigned int);

unsigned int factorialUsingTailRecursion(unsigned int);

int main() {
    unsigned long number;
    cout << "Enter a number to calculate n! : ";
    cin >> number;

    cout << number << "! = " << factorial(number) << endl;
    cout << number << "! = " << factorialUsingTailRecursion(number) << endl;

    return 0;
}

unsigned int factorial(unsigned int n) {
    int fact = 1;
    n < 1 ? fact = 1 : fact = n * factorial(n - 1);  //It invokes itself.
    return fact;
}

unsigned int factorialUsingTailRecursion(unsigned int n) {
    void factorialUsingTailRecursion(unsigned int, unsigned int &);
    unsigned int result = 1;
    factorialUsingTailRecursion(n, result);
    return result;
}

void factorialUsingTailRecursion(unsigned int n, unsigned int &result) {
    if (n <= 1) return;
    result *= n;
    factorialUsingTailRecursion(n - 1, result);
}

