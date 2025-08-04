/*
Running Comparison
Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for 
N
N days — on the 
i
t
h
i 
th
  day, Alice ran 
A
i
A 
i
​
  meters and Bob ran 
B
i
B 
i
​
  meters.

On each day,

Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
For example, on a given day

If Alice ran 
200
200 meters and Bob ran 
500
500, Alice would be unhappy but Bob would be happy.
If Alice ran 
500
500 meters and Bob ran 
240
240, Alice would be happy and Bob would be unhappy.
If Alice ran 
300
300 meters and Bob ran 
500
500, both Alice and Bob would be happy.
On how many of the 
N
N days were both Alice and Bob happy?

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of three lines of input.
The first line of each test case contains a single integer 
N
N — the number of days.
The second line of each test case contains 
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
  — the distances run by Alice on the 
N
N days.
The third line of each test case contains 
N
N space-separated integers 
B
1
,
B
2
,
…
,
B
N
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  — the distances run by Bob on the 
N
N days.
Output Format
For each test case, output on a new line the number of days when both Alice and Bob were happy.

Constraints
1
≤
T
≤
1000
1≤T≤1000
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
,
B
i
≤
10
5
1≤A 
i
​
 ,B 
i
​
 ≤10 
5
 
Sample 1:
Input

4
3
100 200 300
300 200 100
4
1000 1000 1000 1000
400 500 600 1200
4
800 399 1400 532
2053 2300 3400 23
5
800 850 900 950 1000
600 800 1000 1200 1400
Output
1
3
0
5
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
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        // your code goes here
        int count=0;
        int c1=0;
        int c2=0;
        
        for(int i=0;i<n;i++){
            if(!(a[i]>2*b[i] || b[i]>2*a[i])){
                count++;
            }
        
        }
        cout << count << endl;
    }
}


/*
problem 2

Largest and Second Largest
You are given an array 
A
A of 
N
N integers.
Find the maximum sum of two distinct integers in the array.

Note: It is guaranteed that there exist at least two distinct integers in the array.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains single integer 
N
N — the size of the array.
The next line contains 
N
N space-separated integers, denoting the array 
A
A.
Output Format
For each test case, output on a new line, the maximum sum of two distinct integers in the array.

Constraints
1
≤
T
≤
1000
1≤T≤1000
2
≤
N
≤
10
5
2≤N≤10 
5
 
1
≤
A
i
≤
1000
1≤A 
i
​
 ≤1000
The sum of 
N
N over all test cases does not exceed 
2
⋅
10
5
2⋅10 
5
 .
Sample 1:
Input

4
3
4 1 6
7
3 7 2 1 1 5 3
5
8 2 9 4 9
2
1 2

Output
10
12
17
3
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        int max=0;
        for(int i=0;i<n;i++){
            if(a[i]>max) max=a[i];
        }
        
        int second_max=0;
         for(int i=0;i<n;i++){
            if(a[i]>second_max && a[i]<max) second_max=a[i];
        }
        
        cout << max+second_max<<endl;
        
        
    }
}

/*
problem 3


Difficulty Rating Order
Our Chef has some students in his coding class who are practicing problems. Given the difficulty of the problems that the students have solved in order, help the Chef identify if they are solving them in non-decreasing order of difficulty. Non-decreasing means that the values in an array is either increasing or remaining the same, but not decreasing. That is, the students should not solve a problem with difficulty 
d
1
d 
1
​
 , and then later a problem with difficulty 
d
2
d 
2
​
 , where 
d
1
>
d
2
d 
1
​
 >d 
2
​
 .

Output “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of 
2
2 lines of input.
The first line contains a single integer 
N
N, the number of problems solved by the students
The second line contains 
N
N space-separate integers, the difficulty ratings of the problems attempted by the students in order.
Output Format
For each test case, output in a new line “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not. The output should be printed without the quotes.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings yes, YeS, and YES will all be treated as equivalent.

Constraints
1
≤
T
≤
100
1≤T≤100
2
≤
N
≤
100
2≤N≤100
1
≤
1≤ difficulty of each problem 
≤
5000
≤5000
Sample 1:
Input

4
3
1 2 3
3
1 1 2
5
100 200 300 400 350
5
1000 2000 5000 3000 1000

Output
Yes
Yes
No
No
*/

//solution
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }

        bool NonDecreasing = true;
        for (int i = 1; i < n; i++) {
            if (d[i] < d[i - 1]) {
                NonDecreasing = false;
                break;
            }
        }

        cout << (NonDecreasing ? "Yes" : "No") << endl;
    }
    return 0;
}