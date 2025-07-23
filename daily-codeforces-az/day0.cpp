//LAST WEEK ATTEMPTED QUESTIONS
/*
All Primes in Range
Write a program to print all prime numbers in the range [
L
L, 
R
R].

Input Format
The first and only line of input contains two space separated integers, 
L
L and 
R
R - The start and end of the range.
Output Format
Print on a single line, all prime numbers between 
L
L and 
R
R (inclusive) in increasing order with a space between them.
Constraints
1 ≤ 
L
L, 
R
R ≤ 1000
L
L ≤ 
R
R
Sample 1:
Input
Output
2 11
2 3 5 7 11
*/

//Solution
#include <iostream>
using namespace std;

// Function to check if a number is prime, return true if num is prime else false
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to print prime numbers in the range [L, R]
void printPrimesInRange(int L, int R) {
    for (int i = L; i <= R; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int L, R;
    cin >> L >> R;

    printPrimesInRange(L, R);

    return 0;
}


//REST will add later