//Did many newbie leveled problems in C++
//But adding only the ones I found interesting
/*Reverse the Array
Complete the given function which reverses the original array using pointers.

Input Format
The first line of input contain a single integer 
N
N - the size of the input array.
Next line contains 
N
N space separated integers - the elements of the array.
Output Format
Output 
N
N space separated integers - the reversed array.
Sample 1:
Input
5
1 2 3 4 5
Output
5 4 3 2 1*/

//solution
#include <iostream>
using namespace std;

// Function to reverse the elements of an array using pointers
void reverseArray(int* arr, int size) {
   // Complete this function 
   int* first = arr;
   int* last = arr + (--size);
    while(first<last){
       int temp = *first;
        *first = *last;
        *last = temp;
         first++ ;
         last-- ;
        
    }   
   
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
   
    // function call
    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


///////////////////////
// Second Question
///////////////////////
/*
Sum of Digits - II
Write a program to calculate the sum of the digits present in an alphanumeric string.

Input Format
The first line contains an integer, T, denoting the number of test cases.
Each of the next T lines contains a string consisting of lowercase/uppercase English letters, along with digits 0 to 9. (There shall be no space in the string)
Output Format
For each test case, print the sum of digits in each string.
Constraints
1 ≤ T ≤ 20
1 ≤ Length of each string ≤ 1000
Sample 1:
Input
1
Hel#284!lo23Chef
Output
19
*/

//solution
#include <iostream>
#include <string>
using namespace std;

bool isNum(char ch){
    if(ch>='0' && ch<='9'){
        return true;
        
    }else{
        return false;
    }
        
}


int main() {
    // Write your code here
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        
        int sum=0;
        
        for(char ch : str){
            if(isNum(ch)){
                sum += (ch -'0');  
            }else{
                continue;
            }
        }
        
    cout << sum << endl;
        
    }
    return 0;
}