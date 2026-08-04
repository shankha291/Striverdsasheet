class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        //**Bruteforce TC:O(nlogn), SC:O(1)
        // int idx=0,i=0,j=0;
        // vector <int> temp(m+n);
        // while(i<m && j<n)
        // {
        //     if(arr1[i]<=arr2[j])
        //     {
        //         temp[idx++]=arr1[i++];
        //     }
        //     else
        //     {
        //         temp[idx++]=arr2[j++];
        //     }
        // }
        // while(i<m)
        // {
        //     temp[idx++]=arr1[i++];
        // }
        // while(j<n)
        // {
        //     temp[idx++]=arr2[j++];
        // }
        // for(int i=0;i<m+n;i++)
        // {
        //     arr1[i]=temp[i];
        // }


        //******Optimal********* TC:O(nlogn) SC:O(1)
        
        
        int idx=(m+n-1),i=m-1,j=n-1;
        while(i>=0 && j>=0)
        {
            if(arr1[i]>=arr2[j])
            {
                arr1[idx--]=arr1[i--];
            }
            else
            {
                arr1[idx--]=arr2[j--];
            }
        }
        while(j>=0)
        {
            arr1[idx--]=arr2[j--];
        }
    }
};