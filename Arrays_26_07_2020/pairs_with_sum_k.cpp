/*
Given an array of integers, and an integer  ‘K’ , find the count of pairs of elements in the array whose sum is equal to 'K'.

Input:
First line of the input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains 2 space separated integers N and K denoting the size of array and the sum respectively. Second line of each test case contains N space separated integers denoting the elements of the array.

Output:
Print the count of pairs of elements in the array whose sum is equal to the K.

Constraints:
1<=T<=50
1<=N<=50
1<=K<=50
1<=A[i]<=100

Example:
Input
2
4 6
1  5  7 1
4 2
1 1 1 1
Output
2
6

Link:- https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum/0

*/

#include <iostream>
#include <unordered_map>
using namespace std;

int count_pairs(int* arr,int n,int k)
{
    unordered_map<int,int>Q;
    int count = 0;
    
    for(int i=0;i<n;i++)
    {
        if(Q.find(k-arr[i])!=Q.end())
        {
            count+=(Q[k-arr[i]]);
        }
        
        Q[arr[i]]++;
    }
    
    return count;
}
int main() {
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    int n,key;
	    cin>>n>>key;
	    
	    int arr[n];
	    
	    for(int j=0;j<n;j++)
	    cin>>arr[j];
	    
	    cout<<count_pairs(arr,n,key)<<endl;
	}
	return 0;
}