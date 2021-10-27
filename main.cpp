#include <iostream>

using namespace std;
int main() {
    // Exercise 0
    int a;
    int n;
    int result = 1;
    cin >> a >> n;
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    cout << result;

    // Exercise 1
    int n, Nfactorial = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        Nfactorial *= i;
    }

    cout << Nfactorial << endl;

    // Exercise 2;
    int i;
    cin >> i;
    for (int n = 0; n <= i; ++ n)
    {
        int ai = n * n + 3 * n;
        cout << ai << " ";
    }

    // Exercise 3
    int n, currentNumber, currentNegativeNumber = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> currentNumber;
        if (currentNumber < 0 && currentNumber > currentNegativeNumber) {
            currentNegativeNumber = currentNumber;
        }
    }
    cout << currentNegativeNumber << endl;

    // Exercise 4
    int number, digit;
    int sum = 0;
    cin >> number;
    while (number != 0) {
        digit = number % 10;
        number /= 10;
        sum += digit;
    }
    cout << sum;

    // Exercise 5
    int number, result = 0;
    do {
        cin >> number;
        result += number;
    } while (number != 0);

    // Exercise 6
    int n, result = 1;
    int a = 1, b = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i == 1 || i == 2) {
            continue;
        }
        result = a + b;
        a = b;
        b = result;
    }
    cout << result << endl;

    // Exercise 7
    int a, b, result=1;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        result *= i;

    }
    cout << result;

    // Exercise 8
    int number;
    cin >> number;
    bool is_prime = true;
    if (number <= 1)
    {
        is_prime = false;
    } else
    {
        for(int i = 2; i < number / 2; ++i)
        {
            if(number % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }
    cout << (is_prime ? "yes" : "no") << endl;
    return 0;
}
