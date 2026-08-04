class Solution {
  public:
   void reverse(vector <int> &arr,int st,int end)
        {
            int n=arr.size();
            while(st<end)
            {
                swap(arr[st],arr[end]);
                st++;
                end--;
            }
        }
    void rotateArr(vector<int>& arr, int d) {
        // Bruteforce TC:O(n+d) SC:O(n)
        int n=arr.size();
        // d=d%n;
        // vector <int> ans;
        // for(int i=0;i<d;i++)
        // {
        //     ans.push_back(arr[i]);
        // }
        // int idx=0;
        // for(int i=d;i<n;i++)
        // {
        //     arr[idx++]=arr[i];
        // }
        // for(int i=0;i<ans.size();i++)
        // {
        //     arr[idx++]=ans[i];
        // }
        
        //OptimalTC:O(n) SC:O(1)
       d=d%n;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        
    }
};