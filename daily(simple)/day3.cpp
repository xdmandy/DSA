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


/*
Problem 2

Chef loves research! Now he is looking for subarray of maximal length with non-zero product.

Chef has an array A with N elements: A1, A2, ..., AN.

Subarray Aij of array A is elements from index i to index j: Ai, Ai+1, ..., Aj.

Product of subarray Aij is product of all its elements (from ith to jth).

Input
First line contains sinlge integer N denoting the number of elements.
Second line contains N space-separated integers A1, A2, ..., AN denoting the elements of array.
 

Output
In a single line print single integer - the maximal length of subarray with non-zero product.
 

Constraints
1 ≤ N ≤ 100000
0 ≤ Ai ≤ 10000
 

Sample 1:
Input
6
1 0 2 3 0 4
Output
2
Explanation:
For the first sample subarray is: {2, 3}.
*/

//Solution
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int count1=0;
    int count2=0;
    int temp;
    
    for(int num:arr){
        if(num !=0){
            count1++;
        }else if(num == 0){
            temp = count1;
             if(temp>count2) count2=temp;
             count1 = 0;
             
        }
    }
    if(count1>count2) cout << count1;
    else cout << count2;
}
