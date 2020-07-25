/*

Given two arrays A and B respectively of size N and M. The task is to print the count of elements in the intersection (or common elements) of the two arrays.
For this question, intersection of two arrays can be defined as the set containing distinct common elements between the two arrays.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N and M, N is the size of array A and M is size of array B. The second line of each test case contains N input A[i].
The third line of each test case contains M input B[i].

Output:
Print the count of intersecting elements.

Constraints:
1 ≤ T ≤ 100
1 ≤ N, M ≤ 105
1 ≤ A[i], B[i] ≤ 105

Example:
Input:
4
5 3
89 24 75 11 23
89 2 4
6 5
1 2 3 4 5 6
3 4 5 6 7
4 4
10 10 10 10
20 20 20 20
3 3
10 10 10
10 10 10
Output:
1
4
0
1

Explanation:
Testcase 1: 89 is the only element in the intersection of two arrays.
Testcase 2: 3 4 5 and 6 are the elements in the intersection of two arrays.
Testcase 3: Non of the elements are common so the output will be -1.
Testcase 4: 10 is the only element which is in the intersection of two arrays.

Link:- https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays/0

*/


#include <iostream>
#include <unordered_set>
using namespace std;

int intersection_set(int* arr_1,int* arr_2,int n,int m)
{
    unordered_set<int>Q;
    
    for(int i=0;i<n;i++)
    Q.insert(arr_1[i]);
    
    int count = 0;
    
    for(int i=0;i<m;i++)
    {
        if(Q.find(arr_2[i])!=Q.end()){
        count++;
        Q.erase(arr_2[i]);
        }
    }
    return count;
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
	    
	    cout<<intersection_set(arr_1,arr_2,n,m)<<endl;
	    
	}
	return 0;
}