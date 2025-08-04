/*
Compress the Video
Chef recorded a video explaining his favorite recipe. However, the size of the video is too large to upload on the internet. He wants to compress the video so that it has the minimum size possible.

Chef's video has 
N
N frames initially. The value of the 
i
t
h
i 
th
  frame is 
A
i
A 
i
​
 . Chef can do the following type of operation any number of times:

Choose an index 
i
i 
(
1
≤
i
≤
N
)
(1≤i≤N) such that the value of the 
i
t
h
i 
th
  frame is equal to the value of either of its neighbors and remove the 
i
t
h
i 
th
  frame.
Find the minimum number of frames Chef can achieve.

Input Format
First line will contain 
T
T, the number of test cases. Then the test cases follow.
The first line of each test case contains a single integer 
N
N - the number of frames initially.
The second line contains 
N
N space-separated integers, 
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
  - the values of the frames.
Output Format
For each test case, output in a single line the minimum number of frames Chef can achieve.

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
10
5
1≤N≤10 
5
 
1
≤
A
i
≤
10
6
1≤A 
i
​
 ≤10 
6
 
Sum of 
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
1
5
2
1 1
3
1 2 3
4
2 1 2 2
Output
1
1
3
3
*/
//solution 
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int frm[n];
        for(int i=0;i<n;i++){
            cin >> frm[i];
    }
    
    int count=n;
    
    for(int i=0;i<n;i++){
        if(frm[i]==frm[i+1]){
            count -=1;
        }
        
    }
    
    cout<<count<<endl;
    
}

}
