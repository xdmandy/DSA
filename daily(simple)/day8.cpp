/*
Intersecting arrays
Given two integer arrays 
n
u
m
s
1
nums1 and 
n
u
m
s
2
nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and return the result in sorted order.

Intersection is defined as the common element in both arrays. For example -

n
u
m
s
1
nums1 - [1, 2] and 
n
u
m
s
2
nums2 - [2, 1, 3]

Therefore, only 1 and 2 are common in both arrays. On sorting the resultant array would be [1, 2].

Input Format
The first line contains two integers 
n
n , 
m
m— the size of 
n
u
m
s
1
nums1 and 
n
u
m
s
2
nums2.
The second line contains n integers 
a
1
,
a
2
,
…
,
a
n
a1,a2,…,an — the number of 
n
u
m
s
1
nums1.
The third line contains m integers 
b
1
,
b
2
,
…
,
b
m
b1,b2,…,bm — the number of 
n
u
m
s
2
nums2.
Output Format
Print all the elements that are appearing in both the arrays in sorted order.

Constraints
1
≤
n
≤
100
1≤n≤100
0
≤
a
i
≤
100
0≤ai≤100
0
≤
b
i
≤
100
0≤bi≤100
Sample 1:
Input
Output
2 3
1 2
2 1 3
1 2
Explanation:
The common elements in both arrays are 1,2. so their intersection is 1,2.

Sample 2:
Input
Output
3 3
1 2 3
3 4 6
3
*/

//solution

#include<bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    // Write your code here
    int i=0, j=0;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    
    vector<int> result;
    
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i] == nums2[j]){
            result.push_back(nums1[i]);
            i++;
            j++;
        } else if(nums1[i] > nums2[j]) {
            j++;
        }else{
            i++;
        }
        
    }
    return result;
    
    
}

int main() {
    int nums1Size, nums2Size;
    cin >> nums1Size >> nums2Size;

    vector<int> nums1(nums1Size), nums2(nums2Size);
    for (int i = 0; i < nums1Size; ++i) {
        cin >> nums1[i];
    }
    for (int i = 0; i < nums2Size; ++i) {
        cin >> nums2[i];
    }

    vector<int> result = intersect(nums1, nums2);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
