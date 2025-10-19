#include <iostream>
#include <vector>
using namespace std;

/**
 * Objectif : Implémenter la fonction fibonacci_memo
 * en utilisant la récursivité + mémorisation (memoization).
 * 
 * On garde les résultats déjà calculés dans un tableau (vecteur)
 * pour éviter les appels redondants.
 */

// TODO: Compléter la fonction avec un cache (vector<long>)
long fibonacci_memo(long n, vector<long>& memo) {
    // Si la valeur est déjà calculée
    if (memo[n] != -1) return memo[n];

    // Cas de base
    if (n == 0) return 0;
    if (n == 1) return 1;

    // TODO : Calculer et stocker le résultat dans memo[n]
    return memo[n] = 0;
}

int main() {
    long n;
    cout << "Entrez un entier n : ";
    cin >> n;

    vector<long> memo(n + 1, -1);
    cout << "Fibonacci(" << n << ") = " << fibonacci_memo(n, memo) << endl;

    return 0;
}

/*
Programme réalisé par : <votre nom>
Faculté/École : <votre faculté/département>
*/
