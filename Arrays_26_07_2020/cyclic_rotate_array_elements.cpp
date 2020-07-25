/*
Given an array, cyclically rotate an array by one.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. Then following line contains 'n' integers forming the array. 

Output:
Output the cyclically rotated array by one.

Constraints:
1<=T<=1000
1<=N<=1000
0<=a[i]<=1000

Example:
Input:
2
5
1 2 3 4 5
8
9 8 7 6 4 2 1 3

Output:
5 1 2 3 4
3 9 8 7 6 4 2 1

Link:- https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0
*/

#include <iostream>
using namespace std;

void cyclic_rotate(int* arr,int n)
{
    int temp = arr[n-1];
    for(int i=n-1;i>=1;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main() {
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int j=0;j<n;j++)
	    cin>>arr[j];
	    
	    cyclic_rotate(arr,n);
	    
	    for(int j=0;j<n;j++)
	    cout<<arr[j]<<" ";
	    
	    cout<<endl;
	}
	return 0;
}

