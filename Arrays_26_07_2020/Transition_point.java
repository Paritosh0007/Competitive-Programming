  
/*
Find Transition Point:-
You are given a sorted array containing only numbers 0 and 1. Find the transition point efficiently. The transition point is a point where "0" ends and "1" begins (0 based indexing).
Note that, if there is no "1" exists, print -1.
Note that, in case of all 1s print 0.
Input:
N = 5
C[] = {0,0,0,1,1}
Output: 3
Explanation: position 3 is 0 and next
one is 1, so answer is 3.
Input:
N = 4
C[] = {0,0,0,0}
Output: -1
Explanation: Since, there is no "1",so
the answer is -1.
*/



class Transition {
    
    int first_occur(int arr[],int start,int end,int key)
    {
        int answer = -1;
        
        while(start<=end)
        {
            int mid = (start+end)/2;
            
            if(arr[mid]==key)
            {
                answer = mid;
                end = mid-1;
            }
            
            else if(arr[mid]==0)
            start = mid+1;
            
            else
            end = mid-1;
        }
        
        return answer;
    }
    
    int transitionPoint(int arr[], int n) {
        // code here
        return first_occur(arr,0,n-1,1);
    }
