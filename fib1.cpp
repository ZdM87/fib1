#include <iostream>
using namespace std;

/**
 * Objectif : Compléter la fonction fibonacci_recursive
 * pour calculer le n-ième terme de la suite de Fibonacci
 * en utilisant la récursivité simple.
 * 
 * Exemple :
 * fibonacci_recursive(5) → 5
 * fibonacci_recursive(10) → 55
 */

// TODO: Compléter cette fonction récursive
long fibonacci_recursive(long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    // TODO : Remplacer la ligne suivante
    return 0;
}

int main() {
    long n;
    cout << "Entrez un entier n : ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fibonacci_recursive(n) << endl;

    return 0;
}

/*
Programme réalisé par : <votre nom>
Faculté/École : <votre faculté/département>
*/
