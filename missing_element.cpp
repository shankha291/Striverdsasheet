//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.Example 1:Input: nums = [3,0,1],Output: 2

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        //Bruteforce TC:O(n^2),SC:O(1)
        int n=arr.size();
        // for(int j=0;j<=n;j++)
        // {
        //     int flag=0;
        //     for(int i=0;i<n;i++)
        //     {
        //         if(arr[i]==j)
        //         {
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(!flag)
        //         return j;
        // }
        //  return -1;
        
        //*****************OPTIMAL1 ************TC:O(n) SC:O(1).
        // int total=1ll* n*(n+1)/2;
        // int sum=0;
        // for(int i=0;i<n;i++)
        //     sum+=arr[i];
        // return (total-sum);

        //********Optimal 2************ TC:O(n) SC:O(1).
        int xor1=0,xor2=0;
        for(int i=0;i<=n;i++)
            xor1^=i;
        for(int i=0;i<n;i++)
            xor2^=arr[i];
        return xor1^xor2;
    }
   
};