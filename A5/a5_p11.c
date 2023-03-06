/*
CH-230-A
a5_p11.[c or cpp or h]
Serzhan Kenesbek
skenesbek@jacobs-university.de
*/

#include <stdio.h>
#include <stdbool.h>

// A recursive function for finding if x is prime
int isPrime(int x, int i) {
    // for input 1 or 0
    if (x == 1 || x == 0) {
        return 0;
    }
    // If i is equal to 1 then x was not divisible
    // by anything else
    else if (i == 1) {
        return 1;
    }
    else if (x % i == 0) {
        // if i is divisible by a number then
        // it is not prime
        return 0;
    }
    // Function returning a call to itself
    return isPrime(x, i - 1);
}

int main() {
    int x;
    int prime;
    // Input
    scanf("%i", &x);
    // A function call
    prime = isPrime(x, x - 1);
    // Output
    if (prime == 1) {
        printf("%i is prime\n", x);
    }
    else {
        printf("%i is not prime\n", x);
    }
    return 0;
}