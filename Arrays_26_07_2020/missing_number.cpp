/*
Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 107
1 ≤ C[i] ≤ 107

Example:
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output:
4
9

Explanation:
Testcase 1: Given array : 1 2 3 5. Missing element is 4.
Link:- https://practice.geeksforgeeks.org/problems/missing-number-in-array/0

*/

#include<iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n-1];
	    int xor_val = 0;
	    int xor_index=0;
	    
	    for(int j=0;j<(n-1);j++){
	    cin>>arr[j];
	    xor_val^=arr[j];
	    }
	    
	    for(int j=1;j<=n;j++)
	    xor_index^=j;
	    
	    int ans = xor_index^xor_val;
	    
	    cout<<ans<<endl;
	}
	return 0;
}