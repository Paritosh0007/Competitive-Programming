/*

Given two arrays A and B of size N and M respectively. The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in union.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consist of three lines. The first line of each test case contains two space separated integers N and M, where N is the size of array A and M is the size of array B. The second line of each test case contains N space separated integers denoting elements of array A. The third line of each test case contains M space separated integers denoting elements of array B.

Output:
Correspoding to each test case, print the count of union elements of the two arrays.

Expected Time Complexity: O(N + M).
Expected Auxiliary Space: O(N + M).

Constraints:
1 ≤ T ≤ 100
1 ≤ N, M ≤ 105
1 ≤ A[i], B[i] < 105

Example:
Input:
2
5 3
1 2 3 4 5
1 2 3
6 2
85 25 1 32 54 6
85 2
Output:
5
7

Explanation:
Testcase 1: 1, 2, 3, 4 and 5 are the elements which comes in the union set of both arrays.
Testcase 2: 1 , 2 , 6 , 25 , 32 , 54 and 85 are the elements which comes in the union set of both arrays. 

Link to the problem:- https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0

*/

#include <iostream>
#include <unordered_set>

using namespace std;

int union_set(int* arr_1,int* arr_2,int n,int m)
{
    unordered_set<int>Q;
    
    for(int i=0;i<n;i++)
    Q.insert(arr_1[i]);
    
    for(int i=0;i<m;i++)
    Q.insert(arr_2[i]);
    
    return Q.size();
}

int main() {
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    int n,m;
	    
	    cin>>n>>m;
	    
	    int arr_1[n];
	    int arr_2[m];
	    
	    for(int j=0;j<n;j++)
	    cin>>arr_1[j];
	    
	    for(int j=0;j<m;j++)
	    cin>>arr_2[j];
	    
	    cout<<union_set(arr_1,arr_2,n,m)<<endl;
	    
	}
	return 0;
}

