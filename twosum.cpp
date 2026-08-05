class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // Bruteforce TC:O(n^2) SC:O(1)
        int n=arr.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(arr[i]+arr[j]==target)
        //         {
        //             return true;
        //             break;
        //         }
        //     }
        // }
        // return false;
        
        //************************Better******** TC:O(nlogn) SC:O(1)
        // sort(arr.begin(),arr.end());
        // int st=0,end=n-1;
        // while(st<end)
        // {
        //     int sum=arr[st]+arr[end];
        //     if(sum==target)
        //         return true;
        //     else if(sum>target)
        //         end--;
        //     else
        //         st++;
        // }
        // return false;
        
        
        //********************Optimal********************
        
    }
};