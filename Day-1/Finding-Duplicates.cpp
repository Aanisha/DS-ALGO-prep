/* Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one duplicate number in nums, Find this duplicate number.*/

/* Problem link : https://leetcode.com/problems/find-the-duplicate-number */

/* Example 1:

Input: nums = [1,3,4,2,2]
Output: 2

Example 2:

Input: nums = [3,1,3,4,2]
Output: 3

*/

/* Here the implementation, is done using Hare-Tortoise ( or formally two-pointer) algorithm. About the other approaches, I have put another file. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int N;
            cin>>N;
            vector<int> arr(N,0);
            
            for(int i=0;i<N;i++)
            {
                cin>>arr[i];
            }
            
            int hare = arr[0];
            int tortoise = arr[0];
            
            while(1)
            {
                  tortoise = arr[tortoise];
                  hare = arr[arr[hare]];
                  
                  if(hare==tortoise)
                  {
                        break;
                  }
            }
            
            hare = arr[0];
            while(hare!=tortoise)
            {
                  hare = arr[hare];
                  
                  tortoise = arr[tortoise];
            }
            cout<<tortoise<<endl;
     }
     return 0;
}
             
