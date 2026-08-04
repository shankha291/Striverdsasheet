class Solution {
public:
    void moveZeroes(vector<int>& arr) {
    // //*****************Bruteforce*********** TC:O(n) SC:O(n)
    // int n=arr.size();
    // vector<int> ans;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==0)
    //     {
    //         ans.push_back(0);
    //     }
    // }
    // int idx=0;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]!=0)
    //         arr[idx++]=arr[i];
    // }
    // for(int i=0;i<ans.size();i++)
    //     arr[idx++]=ans[i];

    //    //****************Optimal TC:O(n),SC:O(1)**************
        int n=arr.size();
        int j=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                j=i;
                break;
            }
        }if(j==-1)
            return;
        for(int i=j+1;i<n;i++)
        {
            if(arr[i]!=0)
            {
                swap(arr[i],arr[j]);
                j++;
            }
        }

    
    }
};