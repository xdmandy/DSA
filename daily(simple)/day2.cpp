/*
Sum of Multiples
Write a program to find the sum of all the numbers in the array that are multiples of 3.

Input Format
The first line contains an integer, 
T
T, denoting the number of test cases.
Each test contain two lines of inputs:
The first line contains a positive integer 
N
N - the length of the array.
Second line of each test case contains 
N
N space separated integers - the elements of the array.
Output Format
For each test case, print on the new line : sum of the 
3
3's multiples present in the array
Constraints
1 ≤ T ≤ 20
1 ≤ Length of each array ≤ 1000
1 ≤ Elements of each array ≤ 1000
*/
/*
Input
2
4
1 2 3 9
5
1 2 4 5 7

Output
12
0
*/

//Solution
#include <iostream>
#include <vector>
using namespace std;

bool isMultiple(int num){
    if(num%3==0){
        return true;
    }else{
        return false;
    }
}

int main() {
    // Update your code here.
    int t;
    cin >> t;
    while(t--){
    
    int n;
    
    cin >> n;
    
    int arr[n];
    
    int sum = 0;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
        
    }
    
    for(int num : arr){
        if(isMultiple(num)){
            sum += num;
    }
    
    }
     cout << sum << endl;
    
    
}
return 0;
}