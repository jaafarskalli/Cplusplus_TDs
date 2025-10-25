#include <iostream>
using namespace std;

int factorielle(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorielle(n - 1);
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int sommeChiffres(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sommeChiffres(n / 10);
}

int main() {
    int n;

    cout << "Entrez un nombre : ";
    cin >> n;

    cout << "Factorielle de " << n << " = " << factorielle(n) << endl;
    cout << "Fibonacci de " << n << " = " << fibonacci(n) << endl;
    cout << "Somme des chiffres de " << n << " = " << sommeChiffres(n) << endl;

    return 0;
}
