#include <iostream>
using namespace std;

/**
 * Objectif : Implémenter la version itérative
 * de la suite de Fibonacci (sans récursion).
 * 
 * Astuce : utiliser une boucle et deux variables
 * pour suivre les deux derniers termes.
 */

long fibonacci_iterative(long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long a = 0, b = 1, c;

    // TODO : Compléter la boucle pour calculer Fibonacci(n)
    for (long i = 2; i <= n; ++i) {
        // ...
    }

    return 0; // TODO : retourner la bonne valeur
}

int main() {
    long n;
    cout << "Entrez un entier n : ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fibonacci_iterative(n) << endl;

    return 0;
}

/*
Programme réalisé par : <votre nom>
Faculté/École : <votre faculté/département>
*/
