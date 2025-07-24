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
