/*
Take discount or Not
There are 
N
N items in a shop. You know that the price of the 
i
i-th item is 
Ai
 . Chef wants to buy all the 
N
N items.

There is also a discount coupon that costs 
X
X rupees and reduces the cost of every item by 
Y
Y rupees. If the price of an item was initially 
≤
Y
≤Y, it becomes free, i.e, costs 
0
0.

Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of two lines of input.
The first line of the test case contains three space-separated integers — 
N
N, 
X
X, and 
Y
Y.
The second line contains 
N
N space-separated integers — 
A
1
,
A
2
,
…
,
A
N
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 .
Output Format
For each test case, output COUPON if Chef should buy the discount coupon, and NO COUPON otherwise.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings coupon, CouPoN, and COUPON will all be treated as equivalent.

Constraints
1≤T≤1000
1≤N≤100
1≤X,Y≤10^5
1≤Ai≤10^5
 
Sample 1:
Input
5
4 30 10
15 8 22 6
4 40 10
15 8 22 6
4 34 10
15 8 22 6
2 10 100
60 80
3 30 5
50 60 50

Output
COUPON
NO COUPON
NO COUPON
COUPON
NO COUPON
*/


//solution

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        
        int sum1=0;
        int sum2=0;
        
        for(int pr:a){
            sum1 += pr;
        }
        
        for(int price : a){
            if(price<=y){
                continue;
            }else{
                sum2 += (price-y);
            }
        }
        if(sum1 > sum2+x) cout << "COUPON" << endl;
        else cout << "NO COUPON"<<endl;
        
        
    }

}


/*
MIN To MAX
You are given an array A of size N
Let M be the minimum value present in the array initially.
In one operation, you can choose an element Ai(1≤i≤N and an integer 
(1≤X≤100), and set Ai =X.

Determine the minimum number of operations required to make M the maximum value in the array 
A.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer 
N
N - the size of the array.
The next line of each test case contains 
N
N space-separated integers 
A
1
,
A
2
,
…
,
A
N
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  - the elements of the array.
Output Format
For each test case, output on a new line, the minimum number of operations required to make 
M
M the maximum value in the array 
A
A.
Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
≤
100
1≤N≤100
1
≤
A
i
≤
100
1≤A 
i
​
 ≤100
Sample 1:
Input
Output
3
2
1 2
4
2 2 3 4
1
1
1
2
0
*/

//solution
#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int min=100;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<min) min=a[i];
        }
        
        
        // your code goes here
        int count=0;
        for (int ops : a) {
            if(ops>min){ 
                ops=min; 
                count++;
        }
        
    }
    
    cout << count << endl;
    

}
}