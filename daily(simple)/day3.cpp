/*
Armstrong Number
Write a program to check if the given number 
N
N is Armstrong number.

Note: Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Input Format
The first and only line of input contains a single integer, 
N
N - The number that needs to be checked.
Output Format
Print on a single line:
YES if 
N
N is Armstrong number.
NO otherwise.
Constraints
0 ≤ 
N
N ≤ 1000000
Sample 1:
Input
Output
153
YES
Explanation:
1^3+5^3+3^3 = 1 + 125 + 27 = 153.
The number 153 has 3 digits, so each digit was raised to the power of 3 before summing.

Sample 2:
Input
92727
Output
YES

*/

//solution
#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
    // Complete the fuction.
    int count = 0;
    while(n !=0){
        n/=10;
        count++;
    }
    return count;
}



// Function to check if a number is Armstrong: print YES or NO
void isArmstrongNumber(int num) {
    // Complete the fuction
    int n = num;
    int count = countDigits(num); 
    int sum = 0;
    while(num != 0){
        sum += pow(num%10, count);
        num /= 10;
    }
    if(sum == n) cout << "YES";
    else cout << "NO";
    
}

int main() {
    int n;
    cin >> n;

    isArmstrongNumber(n);
    return 0;
}
