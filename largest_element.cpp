#include <bits/stdc++.h>
class Solution {
	public:
	int largest(vector<int> &arr) {
		// Bruteforce
		int n = arr.size();
		sort(arr.begin(), arr.end());
		return arr[n-1];
		// Optimal(preferred)
		// int max=INT_MIN;
		
		// for(int i=0;i<n;i++)
		// {
		//     if(arr[i]>max)
		//     {
		//         max=arr[i];
		//     }
		// }
		// return max;
	}
};
