/*
Equilibrium Point

Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Input:
N = 1
A[] = {1}
Output: 1
Explanation: Since its the only 
element hence its the only equilibrium 
point. 

Input:
N = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2).

*/


class EquilibriumPoint {

    // Function to find equilibrium point
    // a: input array
    // n: size of array
    public static int equilibriumPoint(long arr[], int n) {

        // Your code here
        
        if(n==1)
        return 1;
        
        long left_sum = 0;
        long right_sum = 0;
        
        for(int i=0;i<n;i++)
        right_sum = right_sum + arr[i];
        
        
        for(int i=0;i<n;i++)
        {
            right_sum = right_sum - arr[i];
            
            if(left_sum==right_sum)
            return i+1;
            
            left_sum = left_sum + arr[i];
        }
        
        return -1;
    }
}
